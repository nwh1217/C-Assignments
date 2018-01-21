//NG WENG HONG 1161201057
//MUHAMAD HAFIZI SAIFULDIN BIN JALALUDDIN 1161200655
#include <stdio.h>
float findmax(float[]);//Function Prototype

int main()
{	//Variables declaration and initializing
	float marks[10]={28.0,34.5,16.0,24.3,13.2,32.0,43.8,47.4,49.0,3.0};
	int student=0,i;
	float highest=marks[0];//initialize highest=28.0
	
	for(i=0;i<10;i++)//for loop
	{
		printf("%.1f  ",marks[i]);//Show the output of the numbers
		if (marks[i]>=25)//Setting the condition to determine how many student passed midterm
		student++;//If student's mark higher than 25, counter+1
	}
	printf("\n\n");//new line
	highest=findmax(marks);//Function call
	printf("Number of students who pass (>=5.0)\t: %d\n\n",student);//Show the output of how many student passed the midterm
	printf("The highest marks is\t: %.1f\n\n",highest);//Show the output of highest mark
	system("Pause");//Exit the program
}
float findmax(float marks[])
{
	//Variables declaring and initializing
	int i;
	float highest=marks[i];
	for(i=0;i<10;i++)//for loop
	{
		if (marks[i]>highest)//Set the condition to determine the highest marks
		highest=marks[i];//If marks is greater than highest, then marks=highest
	}
	return highest;//return value to highest
}
