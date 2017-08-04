//14. Convert a decimal number in the range from 0-1000 to its equivalent roman number.

#include<stdio.h>

void main()
{
	int i,d,e;
	int b[]={1000,500,100,50,10,5,1};
	char c[]={'M','D','C','L','X','V','I'};
	printf("Enter a number \n");
	scanf("%d",&i);
	
		for(e=0;e<7;e++)
		{
			d=i/b[e];
			while(d>0)
			{
				printf("%c",c[e]);
				d--;
			}
			i=i%b[e];
		}
		printf("\n");
}

