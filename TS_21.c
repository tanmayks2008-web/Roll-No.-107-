#include<stdio.h>
#include<conio.h>
void main()
{
float net,gross,allowance,deduction;
clrscr();
printf("\nEnter Gross salary : ");
scanf("%f",&gross);
net=gross+gross*10/100 - gross*3/100;
printf("Net salary : %.2f",net);
getch();

}
