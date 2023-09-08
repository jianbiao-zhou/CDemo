#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char buffer[255];
    fp = fopen("fileTest.txt", "r");

    fscanf(fp, "%s", buffer);
    printf("1: buffer is %s\n", buffer);

    fgets(buffer, 255, (FILE*)fp);
    printf("2: buffer is %s\n", buffer);

    fgets(buffer, 255, (FILE*)fp);
    printf("3: buffer is %s\n", buffer);
    fclose(fp);
    return 0;
}