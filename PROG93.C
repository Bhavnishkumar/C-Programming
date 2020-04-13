#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a[2][2],b,c;
clrscr();
printf("Enter 4 numbers: ");
for(b=0;b<=1;b++)
{
for(c=0;c<=1;c++)
{
scanf("%d",&a[b][c]);
}
}
for(b=0;b<=1;b++)
{
for(c=0;c<=1;c++)
{
printf("%d ",a[b][c]);
}
printf("\n");
}
delay(5000);
}