#include<stdio.h>
#include<conio.h>
int main()
{
float c,f;
printf("\nEnter the temparature in fahrenheit : ");
scanf("%f",&f);
c=(5.0/9.0) * (f-32);
printf("\ntemparature in celsius : %f",c);
return 0;
}