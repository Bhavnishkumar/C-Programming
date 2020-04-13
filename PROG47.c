#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char ch, a;
clrscr();
printf("Enter a password: ");
for(a=1;a<=20;a++)
{
if(ch==13)
{
break;
}
ch=getche();
}
delay(2000);
}