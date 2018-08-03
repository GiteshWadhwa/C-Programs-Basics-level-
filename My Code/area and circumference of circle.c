#include<stdio.h>
#define pi 3.142
main()
{
 int rad,area,circ;
 printf("enter the radius of circle:");
 scanf("%d",&rad);
 area=pi*rad*rad;
 printf("Area = %d",area);
 circ=2*pi*rad;
 printf("\ncircumference=%d",circ);


}
