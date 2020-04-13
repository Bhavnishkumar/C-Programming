
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int x,y=0,r,num;
clrscr();
printf("Enter a number: ");
scanf("%d",&num);
for(x=num;x>0;x=x/10)
{
r=x%10;
y=y*10+r;
}
if(y==num)
{
printf("It's a palindrome");
}
else
{
printf("It's not a palindrome");
}
delay(5000);
}