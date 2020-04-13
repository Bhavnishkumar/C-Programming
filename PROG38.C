//38. Enter a number from user and print that number 100 times
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int num,i;
clrscr();
printf("Enter a Number:");
scanf("%d",&num);
for(i=1;i<=100;i++)
{
printf("%d ",num);
}


getch();
}