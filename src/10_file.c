#include <stdio.h>
int main()
{
    FILE *fp = NULL;
    fp = fopen("fileTest.txt", "w+");
    fprintf(fp, "This is test for fprintf\n");
    fputs("this is for test fputs.", fp);
    fclose(fp);
}