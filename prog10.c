//10. Enter a Number from User and Check It Is Odd or Even
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{


int num;
clrscr();

printf("Enter a number:");
scanf("%d",&num);

num==0?printf("%d  is neutral",num):num%2==0?printf("%d  is Even",num):printf("%d is odd",num);
delay(5000);
}
