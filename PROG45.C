#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int num1,num2,x;
clrscr();
printf("Enter the first number: ");
scanf("%d",&num1);
printf("Enter the second number: ");
scanf("%d",&num2);
if(num1<num2)
{
	for(x=num1;x<=num2;x++)
	{
	printf("%d ",x);
	}
}
else if(num2<num1)
{
	for(x=num2;x<=num1;x++)
	{
	 printf("%d ",x);
	}
}

delay(5000);
}