//87. Enter the string from user and print it into toggle case lie sCHOOl

#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char str[25];
int i;
clrscr();
printf("Enter A String :");
scanf("%s",str);
if(str[0]>='A'&& str[0]<='Z')
{
str[0]=str[0]+32;
}
for(i=1;str[i]!='\0';i++)
{
	if(str[i]>='a' &&str[i]<='z')
	{
	str[i]-=32;
	}
}

printf("In toggle case : %s",str);

delay(5000);
}
