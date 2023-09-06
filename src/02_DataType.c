#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Size of int \t:\t %lu \n", sizeof(int));
    printf("Size of signed int\t:\t%lu\n", sizeof(signed int));
    printf("Size of long\t:\t %lu \n", sizeof(long));
    printf("Size of char\t:\t%lu\n",sizeof(char));
    printf("Size of unsigned char\t:\t%lu\n",sizeof(unsigned char));
    printf("Size of signed char\t:\t%lu\n",sizeof(signed char));
    return 0;
}