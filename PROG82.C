#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char a[20],d[20];
int b,c=0,e=0;
clrscr();
printf("Enter a string: ");
scanf("%s",a);
for(b=0;a[b]!='\0';b++)
{
c++;
}
for(b=c-1;b>=0;b--)
{
d[e]=a[b];
e++;
}
d[e]='\0';
printf("%s",d);
delay(5000);
}
