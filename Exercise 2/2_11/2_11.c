//11. Convert a binary number to decimal.

#include<stdio.h>

void main()
{
	long int bin,bin1,dec=0,var=1,rem;

    	printf("Enter binary number: ");
    	scanf("%ld",&bin);
	bin1=bin;

    	while(bin!=0)
	{
	         rem=bin%10;
	        dec=dec+rem*var;
	        var=var*2;
	        bin=bin/10;
	}

    printf("%ld: %ld\n",bin1,dec);
}
