
	#include<stdio.h>
	#include<conio.h>
	#include<dos.h>
	void main()
	{long int r,binary=0,i=1,n;
	clrscr();
	printf("Enter A Number:");
	scanf("%ld",&n);

	while(n!=0)
	{
	r=n%2;
	n=n/2;
	binary=binary+(r*i);
	i=i*10;
	}
	printf("The Binary of Number is %ld",binary);
	delay(3000);
	}