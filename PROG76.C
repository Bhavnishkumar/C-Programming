#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a[5],b,c[5],x=0;
clrscr();
printf("Enter five numbers: ");
for(b=0;b<=4;b++)
{
scanf("%d",&a[b]);
}
for(b=4;b>=0;b--)
{
c[x]=a[b];
x++;
}
for(b=0;b<=4;b++)
{
printf("%d",c[b]);
}
delay(5000);
}