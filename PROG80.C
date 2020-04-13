// Enter string from user and printf string in reverse order
#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main()
{
char str[80];
int i,j,count=0;
clrscr();
printf("Enter  a String:");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
 count++;
}
for(j=count;j>=0;j--)
{
printf("%c",str[j]);
}
delay(1000);
}
