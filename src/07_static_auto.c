#include <stdio.h>
void fun1();
static int count = 10;

int main()
{
    while (count--)
    {
        fun1();
    }
    return 0;
}

void fun1()
{
    static int thingy = 5;
    thingy++;
    printf("thingy is %d, count is %d\n", thingy, count);
}