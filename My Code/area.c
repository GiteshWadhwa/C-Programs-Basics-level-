#include<stdio.h>
#include<conio.h>
#define pi 3.142
main()
{
    float r,area;
 printf("enter the radius of circle:");
 scanf("%f",&r);
area=pi*r*r;
printf("\nArea = %.3f",area);
getch();
return 0;
}
