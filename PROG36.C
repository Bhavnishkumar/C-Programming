#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int num,x,y;
clrscr();
printf("Enter a number: ");
scanf("%d",&num);
for(x=2;x<num;x++)
{
y=num%x;
if(y==0)
{
printf("It's not a prime number");
break;
}
}
if(!(y==0))
{
printf("It's a prime number");
}
getch();
}