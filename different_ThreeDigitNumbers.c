#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>
int main()
{
	int x, y, z,count=0;
	for (x = 1; x < 5; x++)
	{
		for (y = 1; y < 5; y++)
		{
			for (z = 1; z < 5; z++)
			{
				if (x != y && y != z)
				{
					printf("%d%d%d ", x, y, z);
					count++;
				}
			}
		}
	}
	system("color 4");
	printf("\nthe total is : %d", count);
	return 0;
}