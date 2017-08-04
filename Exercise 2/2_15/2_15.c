//15. Compute the power of an integer ‘m’, raised to a positive integer ‘n’. Example power(2,5) is 32.

#include<stdio.h>

int power(int,int);
void main()
{
	int base,exp;
	printf("enter the base of num and exponet (x y)::");
	scanf("%d%d",&base,&exp);
	printf("%d^%d=%d\n",base,exp,power(base,exp));
}

int power(int b, int e)
{
	int res=1;
	if(e==0)
		return 1;
	else
		res=b*power(b,e-1);
	return res;
}

