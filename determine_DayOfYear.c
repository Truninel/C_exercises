#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main()
{
	int day, month, year, leap_year = 0, final_day=0;
	printf("please enter the date of the year: year.month.day  \n");
	scanf("%d.%d.%d", &year, &month, &day);
	if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
	{
		leap_year = 1;
	}
	else
		leap_year = 0;
	switch (month)
	{
	case 1:final_day = day; break;
	case 2:final_day = day + 31; break;
	case 3:final_day = day + 59; break;
	case 4:final_day = day + 90; break;
	case 5:final_day = day + 120; break;
	case 6:final_day = day + 151; break;
	case 7:final_day = day + 181; break;
	case 8:final_day = day + 212; break;
	case 9:final_day = day + 243; break;
	case 10:final_day = day + 273; break;
	case 11:final_day = day + 304; break;
	case 12:final_day = day + 334; break;
	default:
		printf("data error ! \n");
		break;
	}
	final_day = final_day + leap_year;
	char suffix[3]="th";
	char suffix1[3] = "st", suffix2[3] = "nd", suffix3[3] = "rd", suffix4[3] = "th";
	if (final_day % 10 == 1)
		strcpy(suffix, suffix1);
	else if (final_day % 10 == 2)
		strcpy(suffix, suffix2);
	else if (final_day % 10 == 3)
		strcpy(suffix, suffix3);
	else
		strcpy(suffix, suffix4);
	printf("It's the %d%s day of the year.\n", final_day,suffix);
	return 0;
}