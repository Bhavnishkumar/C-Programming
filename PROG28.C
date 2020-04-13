#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int year;
clrscr();
printf("Enter a year: ");
scanf("%d",&year);
if(year%4==0 ||year%100==0)
{
printf("It's a leap year");
}
else
{
printf("It's not a leap year");
}
delay(5000);
}