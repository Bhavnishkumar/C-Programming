// 16. Enter a Number from User and Print Each Digit of Number in Vertical

#include<stdio.h>
#include<conio.h>
void main()
{
unsigned long int  num;
clrscr();
printf("Enter a Number :");
scanf("%u",&num);

num>=10000 &&num<=65535?printf("%u",num/10000):printf("");
num=(((num/10000)*10000)-num);
printf("\n%u",num);
num>=1000 &&num<=5535?printf("%u",num/1000):printf("");

num=((num/10)*10000)-num;




getch();

}






