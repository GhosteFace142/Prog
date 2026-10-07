#include <stdio.h>
#define NODE_ID 13;
void ping()
{
    printf("PING");
}
void pong()
{
    printf("PONG");
}
void handshake()
{
    ping();
    printf("-");
    pong();
    printf("-");
    ping();
}
int main()
{
    int packet_size, total_transfer;
    packet_size = 4 * NODE_ID;
    total_transfer = 3 * packet_size;
    handshake();
    printf(":%d\n", packet_size);
    handshake();
    printf(":%d\n", total_transfer);
    printf("SESSION:CLOSED\n");
    return 0;
}
