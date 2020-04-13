//21. Enter a number from user if it is Positive the find out square, if it is Negative the Find out Cube
#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&x);
	if(x>0)
	{
		printf("Square of number is %d",x*x);
	}
	else if(x<0)
	{
		printf("Cube of number is %d",x*x*x);
	}
	else if(x==0)
	{
		printf("No. is Neutral");
	}
	getch();
}
