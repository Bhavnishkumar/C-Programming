
//9. Enter Four Characters from User and Check That Are Equal or Not
#include<stdio.h>
#include<conio.h>
void main()
{
	char a,b,c,d;
	clrscr();
	printf("Enter 1st character: ");
	a=getche();
	printf("\nEnter 2st character: ");
	b=getche();
	printf("\nEnter 3st character: ");
	c=getche();
	printf("\nEnter 4st character: ");
	d=getche();
	a==b&&a==c&&a==d&&b==c&&c==d?printf("\nThese characters are equal"):printf("\nThese characters are not equal");
	getch();
}