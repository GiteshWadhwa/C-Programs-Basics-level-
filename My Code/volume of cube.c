#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<float.h>
#include<stddef.h>
#define cube(c)(c*c*c)
#define area(l,b)(l*b)
#define area(l)(l*l)
#define total 500
main()
{    int num1,num2,num3,num4,num5,sum,percent;
  /*printf("side of cube is 3 having volume%d:",cube(3));
  printf("\narea of rectangle:%d",(2*3));
  printf("\area of square :%d",(2*2));*/
  printf("\nenter the marks of 5 students:\n");
  scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
  sum=num1+num2+num3+num4+num5;
  percent=(sum*100)/total;
  printf("percentageage = %d",percent);
  getch();
  return 0;
}

