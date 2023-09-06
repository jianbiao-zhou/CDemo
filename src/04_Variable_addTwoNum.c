#include <stdio.h>
/*
声明 x和y已经在其他文件中定义了。
*/
extern int x, y;

int addTwoNum()
{
    return x + y;
}
