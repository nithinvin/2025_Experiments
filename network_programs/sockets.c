#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

int main() {
    int socket_fd;

    while(1) {
        socket_fd = socket(AF_INET, SOCK_STREAM, 0);
        if (socket_fd < 0) {
            perror("socket");
            exit(EXIT_FAILURE);
        }
        printf("socket_fd %d\n", socket_fd);
    }
}
