#include<stdio.h>
#include<conio.h>
 main()
 {
     int num,rem,bin=0,i=1;
     printf("Enter A decimal Nmmber:\n");
     scanf("%d",&num);
     while(num!=0)
     {
         rem=num%2;
         num=num/2;
         bin=bin+(rem*i);
         i=i*10;
     }
     printf("%d",bin);
     getch();
     return 0;
 }
