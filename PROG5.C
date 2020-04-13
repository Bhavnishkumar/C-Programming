//5. Enter A number from user tell positive number or not
#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter a Number:");
scanf("%d",&num);
num>=1?printf("Number is Positive"):printf("Number is not Positive");


delay(5000);
}
