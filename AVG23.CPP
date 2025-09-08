#include<stdio.h>
#include<conio.h>
void main()
{
float avg,total,a,b,c;
clrscr();
printf("\nEnter marks of subject 1 : ");
scanf("%f",&a);
printf("\nEnter marks of subject 2 : ");
scanf("%f",&b);
printf("\nEnter marks of subject 3 : ");
scanf("%f",&c);
avg=(a+b+c)/3;
total=a+b+c;
printf("\nAverage : %.2f",avg);
printf("\nTotal : %.2f",total);

getch();

}