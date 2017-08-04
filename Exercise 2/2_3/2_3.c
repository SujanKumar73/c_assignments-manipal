/*3. Convert watts to luminous flux. 
(ΦV(lm) = P(W) × η(lm/W)
lumens = watts × (lumens per watt)
Example:  What is the luminous flux of a lamp that has power consumption of 60 watts and luminous efficacy of 15 lumens per watt?*/

#include<stdio.h>

void main()
{
	int lumens,wat,lpw;
	
	printf("Enter the power consumption in watt\n-->");
	scanf("%d",&wat);
	printf("Enter the luminous efficiency in lumens per watt\n-->");
	scanf("%d",&lpw);
	lumens=wat*lpw;
	printf("luminous flux=%d lumens \n",lumens);
}


