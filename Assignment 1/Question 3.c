#include <stdio.h>
#define white_A4 0.05
#define green_A4 0.10
#define pink_A4 0.15

 int main()

{{
	int quantity_white,quantity_green,quantity_pink;
	float total_white,total_green,total_pink,grand_total;
	
	printf("Quantity of White A4 paper\t: ");
	scanf("%d",&quantity_white);
	
	printf("Quantity of Green A4 paper\t: ");
	scanf("%d",&quantity_green);
	
	printf("Quantity of Pink A4 paper\t: ");
	scanf("%d",&quantity_pink);
	
	total_white=quantity_white*white_A4;
	total_green=quantity_green*green_A4;
	total_pink=quantity_pink*pink_A4;
	
	grand_total=total_white+total_green+total_pink;
	
	printf("White A4 paper\t: RM %.2f (%d x %.2f)\n",total_white,quantity_white,white_A4);
	printf("Green A4 paper\t: RM %.2f (%d x %.2f)\n",total_green,quantity_green,green_A4);
	printf("Pink A4 paper\t: RM %.2f (%d x %.2f)\n",total_pink,quantity_pink,pink_A4);
	printf("Total\t: RM %.2f",grand_total);
	
}}
