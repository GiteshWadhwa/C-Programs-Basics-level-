#include<stdio.h>
#include<conio.h>
 main()
 {
     int num,rem,oct=0,i=1;
     printf("enter number:\n");
     scanf("%d",&num);
     /*while(num!=0)
     {
         rem=num%8;
         num=num/8;
         oct=oct+(rem*i);
         i=i*10;
     }*/
     printf("%o",num);
     getch();
     return 0;
 }
