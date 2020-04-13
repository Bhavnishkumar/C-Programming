#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i,j;
clrscr();
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
delay(5000);
}