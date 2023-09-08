#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    char *description;
    strcpy(name, "jianbiao zhou");
    /*动态内存分配*/
    description = malloc(30 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy(description, "jianbiao zhou is a DPS student");
    }
    /*假设想要存储更大的描述信息*/
    description = realloc(description, 100 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcat(description, "she is in class 10th");
    }
    printf("name is %s\n", name);
    printf("description is %s\n", description);
    free(description);
    return 0;
}