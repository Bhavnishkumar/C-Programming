
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a[5],b,c=0;
clrscr();
printf("Enter five numbers: ");
for(b=0;b<=4;b++)
{
scanf("%d",&a[b]);
}
for(b=0;b<=4;b++)
{
c=c+a[b];
}
printf("Total is %d",c);
delay(5000);
}