#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a[5],b;
clrscr();
printf("Enter five numbers");
for(b=0;b<=4;b++)
{
scanf("%d",&a[b]);
}
for(b=4;b>=0;b--)
{
printf("%d",a[b]);
}
delay(5000);
}