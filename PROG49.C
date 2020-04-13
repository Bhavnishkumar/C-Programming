#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a=0,b=1,c=0,r;
clrscr();
printf("%d ",a);
while(c<100)
{
c=a+b;
b=a;
a=c;
 if(c>100)
 {
 break;
 }
printf("%d ",c);
}
delay(5000);
}