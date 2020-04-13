//88. Enter the string from user and print it into sentences case like Chandigarh
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char str[25];
int i;
clrscr();
printf("Enter a string :");
scanf("%s",str);
if(str[0]>='a' && str[0]<='z')
	{

	str[0]=str[0]-32;
	}
for(i=1;str[i]!='\0';i++)
{
	if(str[i]>='A' && str[i]<='Z')
	{
		str[i]=str[i]+32;	

	}

}
printf("%s",str);
delay(5000);
}