#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = "Holberton School";
    char *dup;

    dup = _strdup(s);
    if (dup == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", dup);
    free(dup);

    dup = _strdup(NULL);
    if (dup == NULL)
        printf("NULL case OK\n");

    return (0);
}

