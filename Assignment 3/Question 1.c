//Name: NG WENG HONG  1161201057
//	    CHONG HOW WEN 1161200850
//		CHIN JUN MING 1161201057

#include <stdio.h>
#include <string.h>
//Function prototype
float getfare(char[],char);
char*getdestination(char);

int main()
{
	//Variables declaring
	char company[20],code,destination[50],choice;
	float fare;
	
	do
	{
		printf("Select airline company\t: ");
		gets(company);//Asking user to input airline company
		printf("Enter destination code\t: ");
		scanf("%c",&code);//Asking user to input destination code
	
		fare=getfare(company,code);//Function call for getting fare
		strcpy(destination,getdestination(code));//Function call for getting destination
	
		printf("Total fare\t\t: RM %.2f\n",fare);//Showing total fare
		printf("Destination\t\t: %s\n",destination);//Showing destinantion
		getchar();
		printf("Enter [Y] to continue\t: ");
		scanf("%c",&choice);//Asking user whether they want to continue
		getchar();
		printf("\n");
	}
	while(choice =='Y');//Loop the code again if user want to continue
}
float getfare (char company[20],char code)
{
	float fare;
	if (strcmp(company,"MAS")==0)//Determining different fare of Airline company MAS
	{
		switch (code)//Determine fare for different destination
		{
			case 'L' : fare=2093.00;
					   break;
			case 'T' : fare=1725.00;
					   break;
			case 'N' : fare=4395.00;
					   break;
			case 'M' : fare=1112.00;
					   break;
		}
	}
	else if (strcmp(company,"AIR ASIA X")==0)//Determining different fare of Airline company AIR ASIA X
	{
		switch (code)//Determine fare for different destination
		{
			case 'L' : fare=1725.00;
					   break;
			case 'T' : fare=1245.00;
					   break;
			case 'N' : fare=2997.00;
					   break;
			case 'M' : fare=549.00;
					   break;
		}
	}
	else if (strcmp(company,"EMIRATES")==0)//Determining different fare of Airline company EMIRATES
	{
		switch (code)//Determine fare for different destination
		{
			case 'L' : fare=2099.00;
					   break;
			case 'T' : fare=1999.00;
					   break;
			case 'N' : fare=3465.00;
					   break;
			case 'M' : fare=1442.00;
					   break;
		}
	}
	return fare;//Return the fare value to main function
}
char*getdestination(char code)
{
	char destination[50];
	switch(code)//Determine the name for different destination with the code entered by user
	{
		
		case 'L' : strcpy(destination,"London");
				   break;
		case 'T' : strcpy(destination,"Tokyo");
				   break;
		case 'N' : strcpy(destination,"New York");
				   break;
		case 'M' : strcpy(destination,"Melbourne");
				   break;
	}
	return;//return the destination name to main function
}
