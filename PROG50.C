#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{char x;


do{
clrscr();
printf("\nEnter an Alphabet:");
x=getche();
}
while(!((x>=65 && x<=90) || (x>=97 && x<=122)));
delay(2000);
}