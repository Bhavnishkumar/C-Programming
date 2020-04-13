//79 Enter string from user and printf length  of string
#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main()
{
char str[80];
int i,count=0;
clrscr();
printf("Enter  a String:");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
 count++;
}
printf("String length is  %d",count);
delay(1000);
}
