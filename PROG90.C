#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char a[20],ch;
int i,x;
clrscr();
printf("Enter the string: ");
scanf("%s",a);
printf("Enter a character: ");
ch=getche();
for(i=0;a[i]!='\0';i++)
{
if(a[i]==ch)
{
printf("\n%d",i);
x=1;
break;
}
x=0;
}
if(x==0)
{
printf("\nDoes Not Exist");
}
delay(5000);
}