#include<stdio.h>
#include<conio.h>
void main()
{
    void area(void);
    void circ(void);
        area();
        circ();
    getch();
}
void area()
{

    int rad,area;
    printf("\n\nenter the radius of circle:\n");
    scanf("%d",&rad);
    area=3.14*rad*rad;
    printf("\n\n\tArea of circle is %d\n",area);
}
circ()
{
    int circ,rad;
    printf("\n\n\tenter the radius of circle:\n");
    scanf("%d",&rad);
    circ=2*3.14*rad;
    printf("Circumference is %d",circ);
}
