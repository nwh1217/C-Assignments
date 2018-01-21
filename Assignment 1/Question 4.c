#include <stdio.h>
#define epf_deduction 0.11
#define socso_deduction 0.01

int main()

{
	float salary,nett_salary,epf,socso;
	
	printf("Enter your salary\t: RM ",salary);
	scanf("%f",&salary);
	
	epf=salary*epf_deduction;
	socso=salary*socso_deduction;
	nett_salary=salary-epf-socso;
	
	printf("\n");
	
	printf("Salary\t\t: RM %.2f\n",salary);
	printf("EPF\t\t: RM %.2f\n",epf);
	printf("SOCSO\t\t: RM %.2f\n",socso);
	printf("Nett Salary\t: RM %.2f",nett_salary);
}
