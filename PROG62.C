#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int x,y,z,a;
clrscr();
for(x=1;x<=4;x++)
{
for(y=3;y>=x;y--)
{
printf(" ");
}
for(z=1;z<=x;z++)
{
printf("*");
for(a=1;a<=1;a++)
{
printf(" ");
}
}



printf("\n");
}
delay(5000);
}