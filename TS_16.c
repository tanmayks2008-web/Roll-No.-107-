#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,n,i;
clrscr();
printf("\nEnter the value of principal amount : ");
scanf("%f",&p);
printf("\nEnter the value of rate of interest : ");
scanf("%f",&r);
printf("\nEnter the value of time in years: ");
scanf("%f",&n);

i = p*r*n/100;
printf("\n Interest : %.2f",i);
getch();

}
