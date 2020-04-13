#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int x,y;
clrscr();
for(y=1;y<=5;y++)
{
for(x=1;x<=y;x++)
{
printf("*");
}
printf("\n");
}
delay(5000);
}