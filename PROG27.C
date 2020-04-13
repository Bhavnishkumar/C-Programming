

#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int num1,num2,x;
clrscr();
printf("1. ADD");
printf("\n2. SUB");
printf("\n3. MUL");
printf("\n4. DIV");
printf("\n5. MOD");
printf("\nEnter a number: ");
scanf("%d",&x);
if(x>=1 && x<=5)
{
if(x==1)
{
printf("Enter 1st number: ");
scanf("%d",&num1);
printf("Enter 2nd number: ");
scanf("%d",&num2);
printf("Result: %d",(num1+num2));
}
if(x==2)
{
printf("Enter 1st number: ");
scanf("%d",&num1);
printf("Enter 2nd number: ");
scanf("%d",&num2);
printf("Result: %d",(num1-num2));
}
if(x==3)
{
printf("Enter 1st number: ");
scanf("%d",&num1);
printf("Enter 2nd number: ");
scanf("%d",&num2);
printf("Result: %d",(num1*num2));
}
if(x==4)
{
printf("Enter 1st number: ");
scanf("%d",&num1);
printf("Enter 2nd number: ");
scanf("%d",&num2);
printf("Result: %d",(num1/num2));
}
if(x==5)
{
printf("Enter 1st number: ");
scanf("%d",&num1);
printf("Enter 2nd number: ");
scanf("%d",&num2);
printf("Result: %d",(num1%num2));
}
}
else
{
printf("Invalid number");
}
delay(5000);
}

