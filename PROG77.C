#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int x[5],a[5],b,c,d,e;
clrscr();
printf("Enter five numbers: ");
for(b=0;b<=4;b++)
{
scanf("%d",&a[b]);
}
for(b=0;b<=4;b++)
{
e=0;
for(c=a[b];c>=1;c=c/10)
{
d=c%10;
e=e*10+d;
}
x[b]=e;
}

for(b=0;b<=4;b++)
{
printf("%d ",x[b]);
}
delay(5000);
}