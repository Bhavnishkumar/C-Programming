

#include<stdio.h>
#include<conio.h>
#include<dos.h>
void power()
{
int base,power,x,y;
clrscr();
printf("Enter the base number: ");
scanf("%d",&base);
printf("Enter the power: ");
scanf("%d",&power);
y=base;
for(x=power;x>1;x--)
{
y=y*base;
}
printf("Result: %d",y);
delay(5000);
}
void main()
{
clrscr();
power();
}