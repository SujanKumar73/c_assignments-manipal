//8. Write a program to calculate the sum of digits of a number.

 #include<stdio.h>

void main()
{
	int number,sum=0;
	printf("Enter a number::");
	scanf("%d",&number);
	while(number>0)
	{
		sum+=number%10;
		number=number/10;
	}
	printf("sum = %d \n",sum);
}
