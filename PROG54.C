#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i,j;
clrscr();
for(i=4;i>=1;i--)
{
for(j=4;j>=i;j--)
{
printf("%d",j);
}
printf("\n");
}
delay(5000);
}