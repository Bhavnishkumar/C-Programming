#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int x,y,a,z=1,b;
clrscr();
for(a=1;a<=4;a++)
{
for(x=3;x>=a;x--)
{
printf(" ");
}
for(y=1;y<=z;y++)
{
printf("*");
}
z=z+2;
printf("\n");
}
delay(5000);
}