/* 74.Enter 5 values of from user ,enter a value from user and search this value in array if values is found the print "found "or not then print "not found"
*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int arr[5],num;
int i;
clrscr();
printf("Enter a 5 value:\n");
for(i=0;i<=4;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter a number for search: ");
scanf("%d",&num);

for(i=0;i<=4;i++)
{
	if(num==arr[i])
	{
		printf("Found");
		break;
	}
}
if(num!=arr[i])
{
printf("Not Found");
}
delay(5000);
}