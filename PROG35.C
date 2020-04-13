#include<stdio.h>
#include<conio.h>
void main()
{
long int num,i,a,temp=0;
clrscr();
printf("Enter a number: ");
scanf("%ld",&num);
for(i=num;i>0;i=i/10)
{
a=i%10;
temp=temp*10+a;
}
printf("Reverse of the number is %ld",temp);
getch();
}