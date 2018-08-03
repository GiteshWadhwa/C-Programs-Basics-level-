#include<stdio.h>
main()
{
 int num,n=2;
 printf("enter a number:");
 scanf("%d",&num);
 while(n!=0){
     if(num%2==0){
         printf("entered number is %d which is even:",num);
         printf("\na");
     }
     n--;
 }

}
