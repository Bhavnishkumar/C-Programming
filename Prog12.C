//12. Enter 3 Numbers from User and Tell Which Is Greater
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int num1,num2,num3;
clrscr();
printf("Enter First number:");
scanf("%d",&num1);
printf("Enter Second number:");
scanf("%d",&num2);
printf("Enter Third number:");
scanf("%d",&num3);

num1>num2 && num1>num3?printf("First Number is Greater"):printf("");
num2>num1 && num2>num3?printf("Second Number is Greater"):printf("");
num3>num1 && num3>num2?printf("Third Number is Greater"):printf("");
num1==num2==num3?printf(" Each Are Equal"):printf("");
delay(5000);
}