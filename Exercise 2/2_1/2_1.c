//1. Check to see, the year is a leap year or not.

#include<stdio.h>

void main()
{
	int year;		
	printf("Enter the year (yyyy)\n");
	scanf("%d",&year);
	printf("%d::",year);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
				printf("Leap Year\n");
			else
				printf("Not a leap Year\n");
		}
		else
			printf("Leap year\n");
	}
	else
		printf("Not a leap Year\n");
}
