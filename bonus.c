#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	double profits = 0;
	double bonus1, bonus2, bonus3, bonus4, bonus5, bonus;
	printf("profits: \n");
	scanf("%lf", &profits);//enter the profits
	bonus1 = 100000 * 0.1;
	bonus2 = bonus1 + 100000 * 0.075;
	bonus3 = bonus2 + 200000 * 0.05;
	bonus4 = bonus3 + 200000 * 0.03;
	bonus5 = bonus4 + 400000 * 0.015;
	if (profits <= 100000)
	{
		bonus = profits * 0.1;
	}
	else if(profits>100000&&profits<=200000)
	{
		bonus = bonus1 + (profits - 100000) * 0.075;
	}
	else if (profits > 200000 & profits <= 400000)
	{
		bonus = bonus2 + (profits - 200000) * 0.05;
	}
	else if (profits > 400000 && profits <= 600000)
	{
		bonus = bonus3 + (profits - 400000) * 0.03;
	}
	else if (profits > 600000 && profits <= 1000000)
	{
		bonus = bonus4 + (profits - 600000) * 0.015;
	}
	else if (profits > 1000000)
	{
		bonus = bonus5 + (profits - 1000000) * 0.01;
	}
	printf("your bonus :  %lf\n", bonus);
	return 0;
}