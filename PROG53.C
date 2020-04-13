#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=i;j<=15;j=j+5)
{
printf("%d ",j);
}
printf("\n");
}
delay(5000);
}