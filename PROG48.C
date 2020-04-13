#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int x;
clrscr();
for(x=1;x<=100;x++)
{
printf("%d",x);
delay(1000);
clrscr();
}
delay(3000);
}