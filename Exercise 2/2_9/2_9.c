//9. Write a program which checks the 3 numbers are from a Fibonacci series (3, 5, 8 or 21, 34, 55).

#include<stdio.h>

void check_fib(int,int,int);
void main()
{
	int num1,num2,num3;
	printf("Enter the 3 numbers to check for fibonacci series\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	check_fib(num1,num2,num3);
}

void check_fib(int v1,int v2,int v3)
{
	int v;
	v=v1-1;
	if((v+v1)==v2 && (v1+v2)==v3)
		printf(" %d-%d-%d from Fibonacci series\n",v1,v2,v3);
	else
		printf("%d-%d-%d not from fibonacci series\n",v1,v2,v3);
} 
