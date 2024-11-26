#include "conversion.h"
#include <stdlib.h>
#include <stdio.h>


void long_string_aux(long l, char *c, int i);

char *long_string(long l)
{
	char *c = (char *) malloc(sizeof(long)+1);
	long_string_aux(l,c,0);
	return c;
}

void long_string_aux(long l, char *c, int i)
{
	if(l == 0)
	{
		c[i] = '\0';
		return;
	}
	c[i] = l%10 + '0';
	i++;
	long_string_aux(l/10,c,i);
}