#include<stdio.h>
#include<conio.h>
main()
{
    char s[4][10],x[10];
    int i,r,round;
    printf("enter 4 string:");
    for(i=0;i<=3;i++)

     gets(s[i]);
     for(round=1;round<=3;round++)
     {
          for(i=0;i<=3-round;i++)
          {
                r=strcmp(s[i],s[i+1]);
                if(r>0)
            {
                strcpy(x,s[i]);
              strcpy(s[i],s[i+1]);
                strcpy(s[i+1],x);
            }
           }
      }

   for(i=0;i<=3;i++)
        puts(s[i]);
}
