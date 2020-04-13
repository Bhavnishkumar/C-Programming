
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char ch;
clrscr();
printf("Enter a character: ");
ch=getche();
if(ch>=48 && ch<=57)
{
printf("\nIt's a numeric value");
}
else if(ch>=65 && ch<=90)
{
printf("\nIt's a capital alphabet");
}
else if(ch>=97 && ch<=122)
{
printf("\nIt's a small alphabet");
}
else
{
printf("\nIt's a special character");
}
delay(5000);
}