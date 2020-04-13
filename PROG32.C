
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a,b,p,i;
clrscr();
printf("Enter the base: ");
scanf("%d",&b);
printf("Enter the power: ");
scanf("%d",&p);
a=b;
for(i=p;i>1;i--)
{
a=a*b;
}
printf("Result: %d",a);
delay(5000);
}