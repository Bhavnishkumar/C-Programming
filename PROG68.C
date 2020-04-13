#include<stdio.h>
#include<conio.h>
#include<dos.h>
void display(int x)
{
if(x<=3)
{
printf("hello\n");
x++;
display(x);
}
}
void main()
{
clrscr();
display(1);
delay(5000);
}