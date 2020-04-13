//89. Enter a string from user and Enter a character check it Exist in string not
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char str[25],ch;
int i;
clrscr();
printf("Enter a string: ");
scanf("%s",str);
printf("Enter a charecter for search: ");
ch=getche();
for(i=0;str[i]!='\0';i++)
{
	if(ch==str[i])
	{
		printf("\nCharecter is Exist");
		break;
	}

}
		if(ch!=str[i])
		{
		printf("\nCharecter is not Exist");
		}

delay(5000);
}
