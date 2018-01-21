#include <stdio.h>
int main()

{
	const float pounds=2.20462,inches=39.3701;
	float height,weight,BMR,height_inches,weight_pounds;
	int age;
	
	printf("Enter height (m)	: ");
	scanf("%f",&height);
	
	printf("Enter weight (kg)	: ");
	scanf("%f",&weight);
	
	printf("Enter age		: ");
	scanf("%d",&age);
	
	height_inches=height*inches;
	weight_pounds=weight*pounds;
	BMR=66+(6.23*weight_pounds)+(12.7*height_inches)-(6.8*age);
	
	printf("\n");
	
	printf("Height	: %.2f inches\n",height_inches);
	printf("Weight	: %.2f pounds\n",weight_pounds);
	printf("Basal Metabolic Rate (BMR)	: %.2f\n",BMR);
	
	
	
	
}
