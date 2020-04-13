#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int num1,num2,num3;
clrscr();
printf("Enter the 1st number: ");
scanf("%d",&num1);
printf("Enter the 2nd number: ");
scanf("%d",&num2);
printf("Enter the 3rd number: ");
scanf("%d",&num3);
if(num1==num2==num3)
{
printf("All the three numbers are equal");
}
else if(num1>num2 && num1>num3)
{
printf("1st is the greatest");
}
else if(num2>num1 && num2>num3)
{
printf("2nd is the greatest");
}
else if(num3>num2 && num3>num1)
{
printf("3rd is the greatest");
}

delay(5000);
}