#include<stdio.h>
#include<conio.h>
void main()
{
int d1,d2,d3,m1,m2,m3,y1,y2,y3;
clrscr();
printf("Enter the current date \n");
printf("Enter the day");
scanf("%d",&d1);
printf("Enter the month");
scanf("%d",&m1);
printf("Enter the year");
scanf("%d",&y1);
printf("\nNow Enter the DOB: \n");
printf("Enter the day");
scanf("%d",&d2);
printf("Enter the month");
scanf("%d",&m2);
printf("Enter the year");
scanf("%d",&y2);
    if(d2>d1)
    {
    m1=m1-1;
    d1=d1+30;
    }
    if(m2>m1)
    {
    y1=y1-1;
    m1=m1+12;
    }
    if(y2>y1)
    {
    }
    d3=d1-d2;
    m3=m1-m2;
    y3=y1-y2;
    printf("Differece is \n day %d \n month %d \n year %d ",d3,m3,y3);

getch();
}