#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int x, y, z,max;
	printf("enter three intergers:\n");
	scanf("%d%d%d", &x, &y, &z);
	if (x > y)
		max = x;
	else
		max = y;
	if (max > z)
		max = max;
	else
		max = z;
	printf("max=%d\n", max);
	return 0;
}