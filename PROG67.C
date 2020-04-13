#include<stdio.h>
#include<conio.h>
#include<dos.h>
void fact()
{
int num,x,a=1;
clrscr();
printf("Enter a number: ");
scanf("%d",&num);
for(x=1;x<=num;x++)
{
a=a*x;
}
printf("Factorial of %d is %d",num,a);
delay(5000);
}
void rev()
{
int a,b=0,x,num;
clrscr();
printf("Enter a number: ");
scanf("%d",&num);
for(x=num;x>=1;x=x/10)
{
a=x%10;
b=b*10+a;
}
printf("Reverse of %d is %d",num,b);
delay(5000);
}
void sum()
{
int num1,num2;
clrscr();
printf("Enter the first number: ");
scanf("%d",&num1);
printf("Enter the second number: ");
scanf("%d",&num2);
printf("Sum is %d",(num1+num2));
delay(5000);
}
void pal()
{
int a,b=0,x,num;
clrscr();
printf("Enter a number: ");
scanf("%d",&num);
for(x=num;x>=1;x=x/10)
{
a=x%10;
b=b*10+a;
}
if(num==b)
{
printf("palandrome");
}
else
{
printf("Not palandrome");
}
delay(5000);
}
void prime()
{
int num,x,y;
clrscr();
printf("Enter a number: ");
scanf("%d",&num);
for(x=2;x<num;x++)
{
y=num%x;
if(y==0)
{
printf("It's not a prime number");
break;
}
}
if(!(y==0))
{
printf("It's a prime number");
}
delay(5000);
}

void main()
{
clrscr();
fact();
rev();
sum();
pal();
prime();
}