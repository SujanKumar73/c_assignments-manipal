/*2. Convert joules to kilowatt hour. ( 1kW = J / (1000 * S)  where S is in seconds ) Example: What is the power consumption of an electric circuit that has energy consumption of 90J for time duration of 3 seconds?*/

#include<stdio.h>

void main()
{
        long double kw,j;
        int sec;
        printf("Enter the energy consumption in joules\n-->");  
        scanf("%Lf",&j); 
        printf("Enter the duration in seconds\n-->");
        scanf("%d",&sec);
        kw=(j/(1000*sec));
        printf("power consumption=%.5Lf kW",kw);

}

