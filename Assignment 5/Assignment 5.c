//NG WENG HONG 1161201057  KHAIRUL IMRAN BIN MUSTAPHA 1161201946
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Tablet//Create a structure named Tablet
{
	//Variables declaration
	char code,name[100];
	float price;
};
int main()
{
    int i;//Declare i for loop
	struct Tablet model[3];//Declare variable name and array for strcuture
	FILE*fwrite;//Declare variable name for file
	fwrite=fopen("list.txt","w");//Open file and determine its operation
   
   for(i=0;i<3;i++)//For Loop
   {
   	 printf("Enter The Tablet Code : ");
   	 scanf("%c", &model[i].code);//Asking user input tablet code
   	 
	switch(model[i].code)//Switch case to determine the price of model
   	{ 
   	    case 'A' : model[i].price=2699.00;
				   break;
		   		   
		case 'G' : model[i].price=2459.00;
		           break;
		           
		case 'M' : model[i].price=3637.00;
		           break;
	}
	//If else statement to determine the model name
	if(model[i].code=='A')
		strcpy(model[i].name,"Ipad pro");
			else if(model[i].code=='G')
				strcpy(model[i].name,"Pixel C");
					else if(model[i].code=='M')
						strcpy(model[i].name,"Surface Pro");
						
	printf("\tModel\t: %s\n",model[i].name);//Showing the output of the model name
	printf("\tPrice\t: RM %.2f\n\n",model[i].price);//Showing the output of the model price
    fprintf(fwrite,"%s %.2f\n",model[i].name,model[i].price);//Write the model name and price into txt file
	getchar();
   }
fclose(fwrite);//Close the file
system("Pause");//Exit system
}	

