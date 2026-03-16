#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated copy of a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL on failure
 */

char *_strdup(char *str)
{
    char *new;
    unsigned int len = 0, index = 0;

    if (str == NULL)
    {
        return (NULL);
    }

    while (str[len] != '\0')
    {
        len++;
    }

    new = malloc(sizeof(char) * (len + 1));

    if (new == NULL)
    {
        return (NULL);
    }

    while (index <= len)
    {
        new[index] = str[index];
        index++;
    }

    return (new);
}
