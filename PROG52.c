
	#include<stdio.h>
	#include<conio.h>
	#include<dos.h>
	void main()
	{long int n,l,s=0,t;
	clrscr();

	printf("Enter a Number:");
	 scanf("%ld",&n);
	 for(l=n;l>0;)
	 {
	 t=l%10;
	 s=s+(t*t*t);
	 l/=10;
	 }
	 if(s==n)
	 printf("The Number is an Armstrong");
	 else
	 printf("The Number is not an Armstrong");

	delay(3000);
	}