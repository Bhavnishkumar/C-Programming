//18. Enter Marks of Student and Calculate Average of Students Marks
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int sub1,sub2,sub3,sub4,sub5,marks;
float avg;
clrscr();
printf("Enter 5 Subject marks:");
	printf("\nEnter Marks of English:");
	scanf("%d",&sub1);
	printf("Enter Marks of Math:");
	scanf("%d",&sub2);
	printf("Enter Marks of Economics:");
	scanf("%d",&sub3);
	printf("Enter Marks of Hindi:");
	scanf("%d",&sub4);
	printf("Enter Marks of Science:");
	scanf("%d",&sub5);


marks=sub1+sub2+sub3+sub4+sub5;
avg=marks/5;

printf("Average is : %f",avg);

delay(5000);
}

