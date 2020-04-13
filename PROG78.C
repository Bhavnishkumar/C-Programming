//78. Enter string from user and printf each charecter of string in new line
#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main()
{
char str[80],i;
clrscr();
printf("Enter  a String:");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
printf("\n%c",str[i]);
}
delay(3000);
}