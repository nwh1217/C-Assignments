#include <stdio.h>
#include <math.h>

int main()
{
	int a=10,b=2,c=8,d[4]={3,2,4,7},*p;
	
	p=&a;
	c= ++b- *p;
	a=d[2]+b;
	p=&b;
	*p=b+c;
	p=d;
	*(p+1)=20;
	
	printf("%d\n",a); 
	printf("%d\n",c); 
	printf("%d\n",d[0]); 
	printf("%d\n",d[1]); 
	printf("%d\n",*p); 
	system("Pause");
} 
