//4. Convert velocity in km/hr to m/s. ( 1kph = 0.2777778 m/s ).

#include<stdio.h>

void main()
{
	int kmpl;
	long double mps;
	printf("Enter velocity in km/hr\n");
	scanf("%d",&kmpl);
	mps=0.2777778*kmpl;
	printf("Velocity =%.7Lf\n",mps);
} 
