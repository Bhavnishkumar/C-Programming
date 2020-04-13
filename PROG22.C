#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char ch1,ch2;
clrscr();
printf("Enter the first character: ");
ch1=getche();
printf("\nEnter the second charater: ");
ch2=getche();
if(ch1==ch2)
{
printf("\nBoth the characters are same");
}
else if(ch1>ch2)
{
printf("\nThe difference between their ASCII values is %d",(ch1-ch2));
}
else
{
printf("\nThe difference between their ASCII values is %d",(ch2-ch1));
}
delay(5000);
}