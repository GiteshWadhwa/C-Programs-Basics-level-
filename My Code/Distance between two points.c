#include<stdio.h>
#include<math.h>
main()
{
 float x1,x2,y1,y2,d;
 printf("enter two numbers:\n");
 scanf("%f%f",&x1,&y1);
 printf("enter two numbers:\n");
 scanf("%f%f",&x2,&y2);
 d=(float)sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
 printf("Distance = %f",d);



}
