#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>

int main() {
    int socket_fd;
    int iter = 0;

    while(iter < 1000) {
        socket_fd = socket(AF_INET, SOCK_STREAM, 0);
        if (socket_fd < 0) {
            perror("socket");
            exit(EXIT_FAILURE);
        }
        printf("socket_fd %d\n", socket_fd);
        ++iter;
        // close(socket_fd);
    }
}
