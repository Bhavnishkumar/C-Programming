#include<stdio.h>
#include<conio.h>
#include<dos.h>
void cube()
{
int num;
clrscr();
printf("Enter a number: ");
scanf("%d",&num);
printf("Cube of %d is %d",num,(num*num*num));
delay(5000);
}
void main()
{
clrscr();
cube();
}