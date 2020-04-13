//3. Enter 2 Characters from User and Print ASCII Value
#include<stdio.h>
#include<conio.h>
void main()
{
	char x,y;
	clrscr();
	printf("Enter 1st characters: ");
	x=getche();
	printf("\n");
	printf("Enter 2nd characters: ");
	y=getche();
	printf("\nASCII Values of %c : %d    %c : %d",x,x,y,y);
	getch();
}
