#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    char *description;
    strcpy(name, "jianbiao zhou");

    description = malloc(sizeof(char) * 200);
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy(description, "jianbiao zhou is a DPS student in class 10th");
    }
    printf("Name is %s\n", name);
    printf("description is %s\n", description);
    return 0;
}