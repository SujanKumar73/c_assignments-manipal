/*6. Aircraft lands with a velocity of 320 km/hr and remaining runway length is 1400 mts. Aircraft deceleration is 2.85 m/s2 . Check whether aircraft lands safely within the runway or not. (final_velocity2  = initial_velocity2 + 2* acceleration * distance).*/

#include<stdio.h>
#include<assert.h>

void main()
{
	int invalkmph=320,length=1400;
	float accelaration=2.85,invalmph,dist;
 	invalmph=0.2777778*invalkmph;
	dist=(invalmph*invalmph)/(2*accelaration);
	
	assert(dist<=length);
	printf("dist=%f\n",dist);
	printf("safety landing!!\n");
	
}
