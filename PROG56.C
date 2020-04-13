#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
delay(5000);
}