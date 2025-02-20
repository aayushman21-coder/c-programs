//120.	C program to format/extract ip address octets.
#include <stdio.h>
int main()
{
    int ip, octet1, octet2, octet3, octet4;
    printf("Enter the IP address: ");
    scanf("%d", &ip);
    octet1 = (ip & 0xFF000000) >> 24;
    octet2 = (ip & 0x00FF0000) >> 16;
    octet3 = (ip & 0x0000FF00) >> 8;
    octet4 = (ip & 0x000000FF);
    printf("The IP address is: %d.%d.%d.%d\n", octet1, octet2, octet3, octet4);
    return 0;
}