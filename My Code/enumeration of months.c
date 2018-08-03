#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<float.h>
#include<stddef.h>
 main()
 {
     enum month{jan=1,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec};
     int num;
     enum month m;
     printf("enter month number:\n");
     scanf("%d",&num);
     m=num;
     if(m==june||m==july)
     {
         printf("summer holidays:\n");
     }
     else
        {
          printf("college days ");
        }
        getch();
        return 0;
 }
