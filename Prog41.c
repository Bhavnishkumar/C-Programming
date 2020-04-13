//41. Print all odd number between 1 to 100

#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i;
clrscr();
printf("All Odd number between 1 to 100\n");
for(i=1;i<100;i++)
{

if(i%2==1)
{
printf("%d ",i);
}
}
delay(5000);
}
