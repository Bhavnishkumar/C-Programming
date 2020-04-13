
//7. Enter A Number from User and Check It Is Divisible By 4 or Not
#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("Enter a number :");
	scanf("%d",&x);
	x%4==0?printf("%d can divisible by 4",x):printf("%d cann't divisible by 4",x);
	getch();
}