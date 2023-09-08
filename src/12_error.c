#include <stdio.h>
#include <string.h>
#include <errno.h>
extern int errno;
int main()
{
    FILE *fp;
    fp = fopen("unexsited.txt", "rb");
    int errorNum;
    if (fp == NULL)
    {
        errorNum = errno;
        fprintf(stderr, "错误号码 %d\n", errno);
        perror("通过 perror 输出错误。");
        fprintf(stderr, "打开文件错误，%s\n", strerror(errno));
    }
    else
    {
        fclose(fp);
    }

    return 0;
}