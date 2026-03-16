#include "main.h"

/**
 * 
 * 
 * 
 * 
 * 
 * 
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
    
    new[index] = '\0';

    return (new);
}