//12. Convert a decimal number to binary.
#include<stdio.h>


 void main(){

    long int dec,rem,quot;

    int bin[30],i=1,j;


    printf("Enter decimal number: ");

    scanf("%ld",&dec);


    quot = dec;


    while(quot!=0){

         bin[i++]= quot % 2;

         quot = quot / 2;

    }


    printf(" %ld: ",dec);

    for(j = i -1 ;j> 0;j--)

         printf("%d",bin[j]);
	
	printf("\n");

}

