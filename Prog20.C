//20. Enter One Digit Number from User and Print in Word
#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("Enter a Number Between 0-9: ");
	scanf("\n%d",&x);
	if(x==1)
	{
		printf("One");
	}
	else if(x==2)
	{
		printf("Two");
	}
	else if(x==3)
	{
		printf("Three");
	}
	else if(x==4)
	{
		printf("Four");
	}
	else if(x==5)
	{
		printf("Five");
	}
	else if(x==6)
	{
		printf("Six");
	}
	else if(x==7)
	{
		printf("Seven");
	}
	else if(x==8)
	{
		printf("Eight");
	}
	else if(x==9)
	{
		printf("Nine");
	}
	else if(x==0)
	{
	printf("zero");
	}
	else
	{
		printf("Invalid No.");
	}
	delay(5000);
}

