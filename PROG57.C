#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i,j,k,a=0;
clrscr();
for(i=4;i>=1;i--)
{
for(j=1;j<=a;j++)
{
printf(" ");
}
a++;
for(k=1;k<=i;k++)
{
printf("%d",k);
}
printf("\n");
}
delay(5000);
}