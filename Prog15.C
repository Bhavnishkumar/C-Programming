
//15. Enter Float Number from User and Round of the Number
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
float n,x;
int num;
clrscr();
printf("Enter a Float number:");
scanf("%f",&n);
num=n;
x=n-num;
if(x>=0.5)
{
num++;

printf("%d",num);

}
else
{
printf("%d",num);
}
delay(5000);
}


