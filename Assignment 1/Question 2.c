#include <stdio.h>
#define PI 3.142

int main()

{
	float radius,time,circular_velocity;
	
	printf("Enter radius (cm)\t: ");
	scanf("%f",&radius);
	
	printf("Enter time (s)\t\t: ");
	scanf("%f",&time);
	
	circular_velocity=(2*PI*radius)/time;
	
	printf("\n");
	
	printf("Radius\t: %.2f cm\n",radius);
	printf("Time\t: %.2f seconds\n",time);
	printf("Circular Velocity\t: %.2f cm/s",circular_velocity);
}
