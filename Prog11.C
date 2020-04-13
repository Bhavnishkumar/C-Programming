
// 11. Enter 2 Numbers from User and Tell Which Is Greater
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int num1,num2;
clrscr();
printf("Enter First number:");
scanf("%d",&num1);
printf("Enter Second number:");
scanf("%d",&num2);
num1>num2?printf("First Number is Greater"):printf("");
num2>num1?printf("Second Number is Greater"):printf("");
num1==num2?printf("Both are Equal"):printf("");


delay(5000);
}