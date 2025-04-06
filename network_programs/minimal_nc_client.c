// minimal_nc_client.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <server_ip> <port>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    int sock_fd;
    struct sockaddr_in server_addr;
    char buffer[BUFFER_SIZE];

    // Create socket
    sock_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (sock_fd < 0) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    // Setup server address
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(atoi(argv[2]));

    if (inet_pton(AF_INET, argv[1], &server_addr.sin_addr) <= 0) {
        perror("inet_pton");
        close(sock_fd);
        exit(EXIT_FAILURE);
    }

    // Connect to server
    if (connect(sock_fd, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        perror("connect");
        close(sock_fd);
        exit(EXIT_FAILURE);
    }

    printf("Connected to server. Type messages:\n");

    // Read from stdin, send to server, print response
    while (fgets(buffer, BUFFER_SIZE, stdin)) {
        ssize_t nw = write(sock_fd, buffer, strlen(buffer));
        printf("Wrote %ld bytes to server\n", nw);

        ssize_t nr = read(sock_fd, buffer, BUFFER_SIZE);
        printf("Read %ld bytes from server\n", nr);
        if (nr <= 0)
            break;

        buffer[nr] = '\0';
        printf("Server: %s", buffer);
    }

    printf("Disconnected.\n");
    close(sock_fd);
    return 0;
}

