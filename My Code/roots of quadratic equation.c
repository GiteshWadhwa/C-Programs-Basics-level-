#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float a,b,c,D,x,y;
    printf("enter cofficients of x^2 ,x and constant term:\n");
    scanf("%f %f %f",&a,&b,&c);
    D=b*b-4*a*c;
    if(D<0)
        printf("both roots are imaginary:!");
    if(D==0){
        printf("both roots are equal:!");
        x=-b/(2.0*a);
        printf("\nRoots are %f",x);
    }
    if(D>0)
    {
        printf("Roots are real and distinct:!");
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);
        printf("\n\n Roots are %f , %f",x,y);
    }
}
