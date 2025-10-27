#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 */

int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
	{
        if (c <= 'a' && c <= 'z')
        {
                return(0);
        }
        else
        {
                return(1);
	}
	}
}
