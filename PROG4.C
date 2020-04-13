//4. Enter A number from user tell it is 2 digit numer or not
#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter a Number:");
scanf("%d",&num);
num>9 && num<100?printf("Number is of Two digit"):printf("Number is not of Two digit");


delay(5000);
}

