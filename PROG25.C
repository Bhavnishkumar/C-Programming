//25. Enter 2 digit number from user print it in word like 50 five zero 
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{

int num,lstdig,fstdig;
 clrscr();

printf("Enter 2 digit Number :");
scanf("%d",&num);

lstdig=num%10;
fstdig=num/10;

if(num>=10 && num<=99)
{
	if(fstdig==1)
	{
		printf("One ");
	}
	else if(fstdig==2)
	{
		printf("Two ");
	}
	else if(fstdig==3)
	{
		printf("Three ");
	}
	else if(fstdig==4)
	{
		printf("Four ");
	}
	else if(fstdig==5)
	{
		printf("Five ");
	}
	else if(fstdig==6)
	{
		printf("Six ");
	}
	else if(fstdig==7)
	{
		printf("Seven ");
	}
	else if(fstdig==8)
	{
		printf("Eight ");
	}
	else if(fstdig==9)
	{
		printf("Nine ");
	}

	if(lstdig==0)
	{
		printf("Zero");
	}
	else if(lstdig==1)
	{
		printf("One");
	}
	else if(lstdig==2)
	{
		printf("Two");
	}
	else if(lstdig==3)
	{
		printf("Three");
	}
	else if(lstdig==4)
	{
		printf("Four");
	}
	else if(lstdig==5)
	{
		printf("Five");
	}
	else if(lstdig==6)
	{
		printf("Six");
	}
	else if(lstdig==7)
	{
		printf("Seven");
	}
	else if(lstdig==8)
	{
		printf("Eight");
	}
	else if(lstdig==9)
	{
		printf("Nine");
	}



}


delay(5000);
}