//Name: NG WENG HONG
//STUDENT ID: 1161201057
#include <stdio.h>

int main()
{
	//Variables declaration and initializing
	char choice;
	float newspaper,subtotal,grandtotal;
	//Declare price for per kg of newspaper is 0.25
	const float newspaper_price=0.25;
	
	do
	{
	
	printf("Enter amount (kg) of newspaper\t: ");
	//Asking user to input the amount of newpapers
	scanf("%f",&newspaper);
	
	//Calculation for the money to be collect
	subtotal=newspaper*newspaper_price;
	
	printf("\n");
	printf("RM %.2f to be collected.",subtotal);
	printf("\n");
	fflush(stdin);
	printf("\n");
	printf("Do you want to continue [Y/N]\t: ");
	//Asking user whether they want continue or not
	scanf("%c",&choice);
	getchar();
	//Calculation for calculate total money to be collect
	grandtotal=grandtotal+subtotal;
	}
	//Loop again while user type 'Y' or 'y' to continue
	while(choice == 'Y' || choice == 'y');
	//Display the grandtotal of money to be collect
	printf("The total amount is RM %.2f",grandtotal);
	return 0;
}
