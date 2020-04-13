//39. Enter a number from user and print your name number of times
#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
clrscr();
printf("Enter a number : ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
printf("Bhavnish\n");
}
getch();
}