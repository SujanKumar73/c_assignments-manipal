//7. Write a program to calculate the series 1 + 1/2! + 1/3! + .. upto N terms.

#include<stdio.h>
int fact(int);
void main()
{
	int val;
	float sum=0;	
	printf("Enter the value for N:");
 	scanf("%d",&val);
	do
	{
		sum+=1.0/fact(val);
		val--;
	}while(val>=1);
	printf("sum of series=%f\n",sum);
}

int fact(int v)
{
	int fval;
	if(v==1)
		return 1;
	else
		fval=v*fact(v-1);
	return fval;
}

