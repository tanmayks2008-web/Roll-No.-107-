#include<stdio.h>
#include<conio.h>
int main()
{
float bytes,KB,MB,GB;
printf("\nEnter number of bytes : ");
scanf("%f%f%f",&bytes,&KB,&MB);

KB=bytes/1000;
MB=KB/1000;
GB=MB/1000;
printf("\nConversion:");
printf("\n%.2f KB",KB);
printf("\n%.2f MB",MB);
printf("\n%.2f GB",GB);
return 0;

}
