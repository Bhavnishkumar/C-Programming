//8. Enter A Character from User and Check It Is Alphabets or Not
#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	clrscr();
	printf("Enter a character: ");
       x=getche();
	
	((x>='A' &&x<='Z') || (x>='a' &&x<='z'))?printf("\n%c is a alphabet",x):printf("\nThis is not a alphabet");
	
	getch();
}

