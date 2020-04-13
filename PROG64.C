#include<stdio.h>
#include<conio.h>
#include<dos.h>
void sum(int num1,int num2)
{  int x;
x=num1+num2;
printf("Addition: %d\n",x);
}
void sub(int num1,int num2)
{
printf("Subtraction: %d\n",num1-num2);
}
void mul(int num1,int num2)
{
printf("Multiplication: %d\n",num1*num2);
}
void div(int num1,int num2)
{
printf("Division: %d\n",num1/num2);
}
void main()
{
int num1,num2;
clrscr();
printf("Enter First number :");
scanf("%d",&num1);
printf("Enter Second number :");
scanf("%d",&num2);

sum(num1,num2);
sub(num1,num2);
mul(num1,num2);
div(num1,num2);
sum(num1,num2);
sub(num1,num2);
div(num1,num2);
mul(num1,num2);
getch();
}
