#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<float.h>
#include<stddef.h>
#define num 500
main()
{
 int a,b,add,sub,mul,div;
 printf("Enter The two values:\n");
 scanf("%d%d",&a,&b);
 add=a+num;
 sub=b-num;
 mul=a*num;
 div=b/num;
 printf("addition=%d\ndifference=%d\nmultiplication=%d\ndivision=%d",add,sub,mul,div);
 getch();
 return 0;

}
