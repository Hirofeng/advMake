#include <stdio.h>
#include "bar.h"

void bar ()
{
    printf ("This is bar ():%d!\n", BAR_NUM);
}


unsigned char bar_add(unsigned char a, unsigned char b)
{
	return (a+b);
}