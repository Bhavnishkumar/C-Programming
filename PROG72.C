#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a[5],b;
clrscr();
printf("Enter five numbers: ");
for(b=0;b<=4;b++)
{
scanf("%d",&a[b]);
}
printf("odd number list:\n");
for(b=0;b<=4;b++)
{
if(a[b]%2==1)
{
printf("%d ",a[b]);
}
}
delay(5000);
}