//75. Enter 5 values from user and copy that array into another array 


#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int arr[5],arr2[5],i;
clrscr();

printf("Enter array Element of An array:\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d ",&arr[i]);

	}

	printf("Copy array into another An array is :\n");
	for(i=0;i<=4;i++)
	{
		arr2[i]=arr[i];
		printf("%d\n",arr2[i]);
	}

delay(5000);
}

