#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a[2][2],b[2][2],c,d;
clrscr();
printf("Enter 4 numbers: ");
for(c=0;c<=1;c++)
{
	for(d=0;d<=1;d++)
	{
	scanf("%d",&a[c][d]);
	}
}
printf("Enter 4 numbers: ");
for(c=0;c<=1;c++)
{
	for(d=0;d<=1;d++)
	{
	scanf("%d",&b[c][d]);
	}
}
for(c=0;c<=1;c++)
{
	for(d=0;d<=1;d++)
	{
	a[c][d]=a[c][d]+b[c][d];
	}
	}
printf("Addition two array is:\n");
for(c=0;c<=1;c++)
{
	for(d=0;d<=1;d++)
	{
	printf("%d ",a[c][d]);
	}
printf("\n");
}

 delay(5000);
}