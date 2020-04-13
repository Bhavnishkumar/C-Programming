#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char a[20];
int num,i,b;
clrscr();
printf("Enter the string: ");
scanf("%s",a);
printf("Enter a number: ");
scanf("%d",&num);
for(b=0;a[b]!='\0';b++);
if(num>(b-1))
{
printf("This bound does not exist");
}
else
{
for(i=0;a[i]!='\0';i++)
{
if(i==num)
{
printf("%c",a[i]);
break;
}
}
}
delay(5000);
}