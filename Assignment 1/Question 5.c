#include <stdio.h>
#define gst 0.06

int main()

{
	float bill,gst_amount,total_bill,individual_bill;
	int number_friend;
	
	printf("Enter the bill for lunch\t: RM ");
	scanf("%f",&bill);
	
	printf("Total number of friends\t: ");
	scanf("%d",&number_friend);
	
	gst_amount=bill*gst;
	total_bill=bill+gst_amount;
	individual_bill=total_bill/number_friend;
	
	printf("Lunch bull\t: RM %.2f\n",bill);
	printf("GST amount\t: RM %.2f\n",gst_amount);
	printf("Total bill\t: RM %.2f\n",total_bill);
	printf("Individual bill\t: RM %.2f",individual_bill);
}
