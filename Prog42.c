//42. Enter a number from user and print table of that number from 1 to 10 like 4x1=4
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int num,i;
clrscr();
printf("Enter a number :");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
printf("%d * %d = %d \n",num,i,num*i);
}



delay(5000);
}
