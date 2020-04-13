#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int num,x,y=1;
clrscr();
printf("Enter a number: ");
scanf("%d",&num);
for(x=1;x<=num;x++)
{
y=y*x;
}
printf("Factorial of %d is %d",num,y);
delay(5000);
}