#include<stdio.h>
#include<conio.h>
main()
{
 float a,b,c,D,x,y;
 printf("enter teh value of a,b& c");
 scanf("%f%f%f",&a,&b,&c);
 D=b*b-4*a*c;
 printf("Discriminant = %.2f",D);
 if(D<0)
     printf("Roots are imaginary!");
 if(D==0)
   {
    printf("Roots are same!!");
    x=-b/(2.0*a);
    printf("%f",x);
   }
   if(D>0)
   {
       printf("\nRoots are real and distinct!\n");
       x=(-b+sqrt(D))/(2*a);
       y=(-b+sqrt(D))/(2*a);
       printf("\nRoots are \n%.2f \n %.f",x,y);

   }
   getch();
       return 0;

}
