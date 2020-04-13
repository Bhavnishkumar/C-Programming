//6. Enter A Number from User and Check It Is Float or Not
#include<stdio.h>
#include<conio.h>
void main()
{
	float x,temp;
	int y;
	clrscr();
	printf("Enter a Number ");
	scanf("%f",&x);
	y=x;

	temp=x-y;
	temp>0?printf("%f is a float number",x):printf("%d is not a float number",y);
	getch();
}
