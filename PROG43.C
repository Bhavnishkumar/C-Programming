#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int n,i,y=0;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
for(i=n;i>=0;i--)
{
y=i+y;
}
printf("%d",y);
delay(5000);
}