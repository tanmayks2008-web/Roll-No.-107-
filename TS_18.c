#include<stdio.h>
#include<conio.h>
void main()
{
int a,p,l,b;
clrscr();
printf("\nEnter the length of the rectangle : ");
scanf("%d",&l);
printf("\nEnter the breadth of the rectangle : ");
scanf("%d",&b);
a=l*b;
p=2*(l+b);
printf("\nthe area of the rectangle : %d",a);
printf("\nthe perimeter of rectangle : %d",p);

getch();

}
