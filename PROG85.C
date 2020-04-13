#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char a[20],b[20];
int x,y,z;
clrscr();
printf("Enter the first string: ");
scanf("%s",a);
printf("Enter the second string: ");
scanf("%s",b);
for(x=0;a[x]!='\0';x++);
for(y=0;b[y]!='\0';y++);
if(x!=y)
{
printf("The two strings are not same");
}
else
{
for(z=0;z<=(x-1);z++)
{
if(a[z]!=b[z])
{
printf("The two strings are not same");
y=0;
break;
}
y=1;
}
}
if(y==1)
{
printf("Both the strings are same");
}
delay(5000);
}