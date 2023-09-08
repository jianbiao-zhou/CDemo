#include <stdio.h>

int main()
{
    int i = 0;
    //定义指针变量。
    int *p;
    p = &i;
    printf("i 的地址是 %p\n", p);
    return 0;
}