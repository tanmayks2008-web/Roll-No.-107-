#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\nEnter the value of number 1 : ");
scanf("%d",&a);
printf("\nEnter the value of number 2 : ");
scanf("%d",&b);
printf("\nbefore swapping : a=%d,b=%d",a,b);
c=a;
a=b;
b=c;

printf("\nafter swapping : a=%d,b=%d",a,b);
getch();

}
