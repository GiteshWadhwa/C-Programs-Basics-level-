#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
 long long octalnum,decimalnum=0,rem,i=0;
 printf("Enter a octal number:\n");
 scanf("%d",&octalnum);
 printf("%d in octal number= %lld in binary",octalnum,)
 while(octalnum!=0)
 {
     decimalnum+=(octalnum%10)*pow(8,i);
     ++i;
     octalnum/=10;
 }
 while(decimalnum!=0)
 {

 }
 printf("%d",binary);

 getch();
 return 0;
}
