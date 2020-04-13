//23. Enter 2 numbers from user, check which is greater
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{

int  num1,num2;
clrscr();

printf("Enter 1st number :");
scanf("%d",&num1);
printf("Enter 2nd number :");
scanf("%d",&num2);
	if(num1>num2)
	{
		printf("1st is greater then  2nd ");
	}
	else if(num2>num1)
	{
		printf("2nd is greater then 1st");
	}
	else
	{
		printf("both are Equal");
	}
delay(5000);
}
