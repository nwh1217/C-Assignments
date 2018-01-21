//Name: NG WENG HONG  1161201057
//	    CHONG HOW WEN 1161200850
//		CHIN JUN MING 1161201057

#include<stdio.h>
#include<string.h>
#include<math.h>

//Function prototype
char*get_item(int);
float get_price(int);
void display(char[], char[],float,int, float);

int main()
{
	//Variables declaring and initializing
	int choice,quantity,total_item1=0,total_item2=0,total_item3=0;
	char opt,name[50],item[50];
	float price, total=0,item_1=0,item_2=0,item_3=0,payment=0;
	
	//Showing the menu
	printf("------------------------------------------\n");
	printf("-	WELCOME TO APPLE STORE           -\n");
	printf("------------------------------------------\n");
	printf("1. MacBook Air 11\"	[RM 4099.00]\n");
	printf("2. MacBook Air 13\"	[RM 4549.00]\n");
	printf("3. Macbook     12\"	[RM 5899.00]\n");
	printf("------------------------------------------\n");
	printf("\n");
	printf("Enter name     : ");
	gets(name);//Asking user enter their name
	
	do
	{
		printf("Enter choice   : ");
		scanf("%d", &choice);//Asking user input their choice
		printf("Enter quantity : ");
		scanf("%d", &quantity);//Asking user input quantity
		printf("\n");
		
		//Tracking the item has been sold
		if(choice==1)
		{
			total_item1+=quantity;
		}
		else if(choice==2)
		{
			total_item2+=quantity;
		}
		else if (choice==3)
		{
			total_item3+=quantity;
		}
		
		strcpy(item, get_item(choice));//Function call for getting item name
		
		price=get_price(choice);//Function call for getting price
		total=price*quantity;//Calculation for the subtotal
		payment=payment+total;//Calculation for total payment
		
		display(name, item, price, quantity, total);//Funcion call to display receipt
		
		getchar();
		printf("Ente [Y] to continue : ");
		scanf("%c",&opt);//Asking user whether they want to continue
		getchar();
	}
	while(opt=='Y');//loop the code again if user want to continue
	
	//Displaying the summary
	printf("\n");
	printf("------------------------------------------\n");
	printf("-	TRANSACTION'S SUMMARY            -\n");
	printf("------------------------------------------\n");
	printf("Item 1 sold   : %d\n", total_item1);//Displaying quantity of item 1 sold
	printf("Item 2 sold   : %d\n", total_item2);//Displaying quantity of item 2 sold
	printf("Item 3 sold   : %d\n", total_item3);//Displaying quantity of item 3 sold
	printf("Total Payment : %.2f\n", payment);//Displaying the grandtotal
	
	return 0;
}

char*get_item(int choice)
{
	char item[50];
	
	switch(choice)//Determining the item name with code entered by user
		{
			case 1:
				strcpy(item, "MacBook Air 11");
				break;
				
			case 2:
				strcpy(item, "MacBook Air 13");
				break;
			
			case 3:
				strcpy(item, "MacBook 12");
				break;
		}
	return;//Return the item name to main function
}

float get_price(int choice)
{
	float price;
	
	switch(choice)//Determining the price for item with the code entered by user
		{
			case 1:
				price=4099.00;
				break;
				
			case 2:
				price=4549.00;
				break;
				
			case 3:
				price=5899.00;
				break;
		}
	return price;//Return the price value to main function
}

void display(char name[50], char item[50], float price, int quantity, float total)
{
	//Displaying the receipt of purchase
	printf("------------------------------------------\n");
	printf("-	RECEIPT OF PURCHASE              -\n");
	printf("------------------------------------------\n");
	printf("Name     : %s\n", name);//Displaying user's name
	printf("Item     : %s\n", item);//Displaying item name
	printf("Price    : RM %.2f\n", price);//Displaying price for item
	printf("Quantity : %d\n", quantity);//Displaying quantity of item
	printf("Total    : RM %.2f\n", total);//Displaying the subtotal
	printf("------------------------------------------\n");
	printf("\n");
}
