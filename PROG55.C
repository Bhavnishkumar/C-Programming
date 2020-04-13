#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=4;i++)
{
for(j=3;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("%d",k);
}
printf("\n");
}
delay(5000);
}