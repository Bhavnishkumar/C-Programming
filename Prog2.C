//2. Enter Password Display Like *************
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char ch1,ch2,ch3,ch4,ch5,ch6;
clrscr();
textcolor(YELLOW);
printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter Your Password :");
ch1=getch();
cprintf(" *");
ch2=getch();
cprintf(" *");
ch3=getch();
cprintf(" *");
ch4=getch();
cprintf(" *");
ch5=getch();
cprintf(" *");
ch6=getch();
cprintf(" *");
delay(5000);
}
