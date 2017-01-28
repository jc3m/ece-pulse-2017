#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <string.h>

extern int create_socket();

int main(int argc, char* argv[])
{
    struct addrinfo *res;
    int sockfd = create_socket();
    
    getaddrinfo("127.0.0.1", "4000", 0, &res);
    connect(sockfd, res->ai_addr, res->ai_addrlen);

    char msg[] = "Hello world!";
    send(sockfd, msg, strlen(msg), 0);

    freeaddrinfo(res);

    return 0;
}
