#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
 int bin,i=0,s=0;
 printf("Enter A binary Number:\n");
 scanf("%d",&bin);
 while(bin!=0)
 {
  s=s+pow(2,i)*(bin%10);
 bin=bin/10;
 i++;
 }
 printf("%d",s);
 getch();
 return 0;

}
