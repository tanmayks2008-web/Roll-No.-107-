#include<stdio.h>
#include<conio.h>
void main()
{
float net,gross;
clrscr();
printf("\nEnter Gross sales : ");
scanf("%f",&gross);
net=gross - gross*10/100;
printf("Net sales : %.2f",net);
getch();

}