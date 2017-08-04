//10. Change the case of an alphabet.

#include<stdio.h>

void main()
{
	char c;
	printf("Enter an alphabet\n");
	scanf("%c",&c);
	getchar();
	if(c>=97 && c<=122)
	{
		c=c-32;
		printf("to upper: %c\n",c);
	}
	else if(c>=65 && c <=90)
	{
		c=c+32;
		printf("to lower: %c\n",c);
	}

}
