#include <stdio.h>

int main(void)
{
    unsigned int a = 1; 
    printf("%02x %02x %02x %02x\n",
        ((unsigned char *)&a)[0],
        ((unsigned char *)&a)[1],
        ((unsigned char *)&a)[2],
        ((unsigned char *)&a)[3]); 
    return 0;
}
