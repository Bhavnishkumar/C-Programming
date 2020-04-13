#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i,j,k,a=1;
clrscr();
for(i=1;i<=3;i++)
{
for(j=2;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=a;k++)
{
printf("*");
}a=a+2;
printf("\n");
}
a=1;
for(i=2;i>=1;i--)
{
for(j=2;j>=i;j--)
{
printf(" ");
}
for(k=3;k>=a;k--)
{
printf("*");
}a=a+2;
printf("\n");
}
delay(5000);
}