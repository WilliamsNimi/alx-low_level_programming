#include <stdlib.h>
#include <stdio.h>
#include "0-object_like_macro.h"
#include "1-pi.h"
#include "3-function_like_macro.h"
#include "4-sum.h"
int main(void)
{
	int s;

	s = 98 + SIZE;
	printf("%d\n", s);
	printf("%.3f\n", PI);
	printf("%d\n", ABS(-3));
	printf("%d\n", SUM(2, 3));
	return (0);
}
