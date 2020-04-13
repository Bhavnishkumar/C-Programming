#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i,j,k,a=0,b=7;
clrscr();
for(i=1;i<=4;i++)
{
for(j=1;j<=a;j++)
{
printf(" ");
}
a++;
for(k=1;k<=b;k++)
{
printf("*");
}
b=k-3;
printf("\n");
}
delay(5000);
}