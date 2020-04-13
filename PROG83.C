//83. Enter the string user and change into uppercase
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char str[25];
int i;
clrscr();
printf("Enter a String: ");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
	if(str[i]>='a' && str[i]<='z')
	{
	str[i]=str[i]-32;
	}
}
printf("String  in uppercase is :%s ",str);

delay(5000);
}