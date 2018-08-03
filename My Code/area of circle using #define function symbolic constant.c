#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<float.h>
#include<stddef.h>
#define pi 3.142
main()
{   int radius,area,circ;
  printf("enter the radius of circle:\n");
  scanf("%d",&radius);
  area=pi*radius*radius;
  circ=2*pi*radius;
  printf("area = %d\ncircumference = %d ",area,circ);
  getch();
  return 0;
}
