#include <stdio.h>
#include "main.h"

/**
  * main- entry point
  *
  * _isupper: return(1)
  * c: c'est le c
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
