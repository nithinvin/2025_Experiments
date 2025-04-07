#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main() {
    int socket_fd;
    struct sockaddr_in server_addr;

    socket_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (socket_fd < 0) {
        perror("socket");
        exit(EXIT_FAILURE);
    }
    printf("socket_fd %d\n", socket_fd);
    // close(socket_fd);

    // Bind address
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    // server_addr.sin_addr.s_addr = INADDR_ANY; // 0.0.0.0
    server_addr.sin_port = htons(4500);

    if (inet_pton(AF_INET, "172.22.91.41", &server_addr.sin_addr) <= 0) {
        perror("inet_pton");
        close(socket_fd);
        exit(EXIT_FAILURE);
    }

    if (bind(socket_fd, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        perror("bind");
        close(socket_fd);
        exit(EXIT_FAILURE);
    }
    printf("bind succeeded\n");

    if (listen(socket_fd, 10) < 0) {
        perror("listen");
        close(socket_fd);
        exit(EXIT_FAILURE);
    }
    fgetc(stdin);


}
