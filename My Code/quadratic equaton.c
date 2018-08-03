#include<stdio.h>
main()
{
 float D,a,b,c,x,y;
 printf("enter  cofficient of a,b,c");
 scanf("%f%f%f",&a,&b,&c);
 D=b*b-4*a*c;
 printf("Discriminant = %.2f ",D);
 if(D<0)
 {
     printf("\nRoots are imaginary!");
 }
 if(D==0)
 {
     printf("\nRoots are equal:");
     x=-b/(2*a);
     printf("\n%.2f",x);
 }
 if(D>0)
 {
     printf("\nRoots are real and distinct!!");
     x=(-b+sqrt(D))/(2*a);
     y=(-b-sqrt(D))/(2*a);
     printf("\n%.2f\n%.2f",x,y);
 }
}
