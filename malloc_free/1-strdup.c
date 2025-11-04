#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *            which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL or on failure
 */
char *_strdup(char *str)
{
    char *dup;
    unsigned int len = 0, i;

    if (str == NULL)
        return (NULL);

    while (str[len] != '\0')
        len++;

    dup = (char *)malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
        dup[i] = str[i];
    dup[len] = '\0';

    return (dup);
}

