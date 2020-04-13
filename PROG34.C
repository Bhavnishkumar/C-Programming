#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
long int num,x,a,b=0;
clrscr();
printf("Enter a number: ");
scanf("%ld",&num);
for(x=num;x>0;x=x/10)
{
a=x%10;
b=b*10+a;
}
printf("\nFirst digit is %d",(b%10));
delay(5000);
}