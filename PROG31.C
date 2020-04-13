#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int l,b,r;
clrscr();
printf("Enter the length:");
scanf("%d",&l);
printf("Enter the breadth:");
scanf("%d",&b);
printf("Perimeter of rectangle is %d",2*(l+b));
printf("\nArea of rectangle is %d",l*b);
delay(5000);
}