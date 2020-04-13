#include<stdio.h>
#include<conio.h>
#include<dos.h>
void display(int x)
{
if(x<=5)
{
x++;
display(x);
printf("%d",x);
display(x);
}
}
void main()
{
clrscr();
display(1);
delay(5000);
}