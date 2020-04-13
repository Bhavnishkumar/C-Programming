#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char a[20];
int i,x=0;
clrscr();
printf("Enter the string: ");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
{
x++;
}
}
printf("There are %d vowels in this string",x);
delay(5000);
}