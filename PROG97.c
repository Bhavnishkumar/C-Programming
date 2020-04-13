
	#include<stdio.h>
	#include<conio.h>
	#include<dos.h>
	void main()
	{long int sum=0,a[2][2],b[2][2],c[2][2],i,j,k;
	clrscr();
	printf("Enter 1st array:\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
	{
	scanf("%ld",&a[i][j]); }}
	printf("Enter 2nd array:\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
	{
	scanf("%ld",&b[i][j]); }}
	for(i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
	{
	sum=0;
	for(k=0;k<2;k++)
	{
	sum=sum+a[i][k]*b[k][j];
	}
	c[i][j]=sum;
	}
	}
	printf("Multiplication result:\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
	{
	printf("%ld\t",c[i][j]);
	}
	printf("\n");
	}
	delay(3000);
	}