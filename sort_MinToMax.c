#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int x, y, z,max;
	printf("enter three intergers:\n");
	scanf("%d%d%d", &x, &y, &z);
	if (x > y)
	{
		max = x; x = y; y = max;
	}
	if (x > z)
	{
		max = x; x = z; z = max;
	}
	if (y > z)
	{
		max = y; y = z; z = max;
	}
	printf(" %d %d %d \n",x,y,z);
	return 0;
}