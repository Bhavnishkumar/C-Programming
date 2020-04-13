#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int num;
clrscr();
printf("Enter a number: ");
scanf("%d",&num);
printf("last digit is %d",(num%10));
delay(5000);
}