#include<stdio.h>
#include<conio.h>
main()
{
    char a[6][10],s[10];
    int d,r,i,round;
    printf("enter 6 Dictioary words:");
    for(i=0;i<=5;i++)
        gets(a[i]);

     for(round=1;round<=5;round++)
     {
      for(i=0;i<=5-round;i++)
      {
        r=strcmp(a[i],a[i+1]);
       if(r>0)
     {
       strcpy(s,a[i]);
       strcpy(a[i],a[i+1]);
       strcpy(a[i+1],s);
      }
    }

 }
printf("\nstrings in dictionary form \n");
for(i=0;i<=5;i++)
puts(a[i]);
}
