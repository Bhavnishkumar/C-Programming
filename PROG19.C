/*19. Calculate Simple Interest =
        (P*R*T)/100
*/

#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
float pri,rate,time,simIns;
clrscr();



printf("Enter Principal Amount :");
scanf("%f",&pri);
printf("Enter Rate :");
scanf("%f",&rate);

printf("Enter Time (in year) :");
scanf("%f",&time);

simIns=(pri*rate*time)/100;
printf("Simple Interest rate is :%f",simIns);

delay(5000);
}