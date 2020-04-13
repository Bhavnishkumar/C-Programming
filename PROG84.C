#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char a[20],b[20],c[50];
int x,y;
clrscr();
printf("Enter the first string: ");
scanf("%s",a);
printf("Enter the second string: ");
scanf("%s",b);
for(x=0;a[x]!='\0';x++)
{
c[x]=a[x];
}
for(y=0;b[y]!='\0';y++)
{
c[x]=b[y];
x++;
}
c[x]='\0';
printf("%s",c);
delay(5000);
}