//NAME: NG WENG HONG
//STUDENT ID: 1161201057
#include <stdio.h>

int main()
{
	//Variables decalration and initializing
	int i;
	float x=1,y=2,total=0.00;
	
	for (i=0;i<10;i++)
	{
		printf("%.0f/%.0f ",x,y);
		//Calculation for total
		total=total+(x/y);
		//Calculation to let y number become big
		y=y*2;
	}
	//Showing the result
	printf("\nThe total of all the series is\t: %.2f",total);
		
	return 0;
	
}
