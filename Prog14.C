
//14. Enter A Lowercase Character from User and Print It Into Uppercase
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char ch;
clrscr();
printf("Enter a Charecter in Lowercase -:");
ch=getche();
if(ch>=97 && ch<=122)
{
ch=ch-32;
printf("\nLowercase is: %c",ch);
}
else if(ch>=65 && ch<=90)
{
printf("Already in Uppercase");
}
else
{
printf("Invalid input");
}
delay(5000);
}