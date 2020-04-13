#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{

float num,num2;
int x;
clrscr();
printf("Enter a number:");
scanf("%f",&num);
x=num;
num2=num-x;


num2>0?printf("%f decimal part of Float number",num2):printf("%d Integer part",x);

delay(5000);
}




