#include<stdio.h>
#include<conio.h>
main()
{
 int km,m,cm,inch,feet;
 printf("enter the distance between the two cities( in km):");
 scanf("%d",&km);
 m=km*1000;
 cm=m/100;
 inch=cm/2.54;
 feet=inch/12;
 printf("\n\n\tdistance in meter is %d",m);
 printf("\n\n\tdistance in centimeter is %d",&cm);
 printf("\n\n\tdistance in inches is %d",&inch);
 printf("\n\n\tdistance in feet is %d",&feet);
 getch();
 return 0;

}
