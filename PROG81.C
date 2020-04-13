//81. Enter string from user and copy string into another string
#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main()
{
char str[80],str2[80];
int i;
clrscr();
printf("Enter  a String:");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
 str2[i]=str[i];
}
delay(1000);
}

