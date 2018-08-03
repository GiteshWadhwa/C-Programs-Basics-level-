#include<stdio.h>
main()
{
    char n[5][10],s[10];
    int i,round,comp;
    printf("enter 5 names:");
    for(i=0;i<=4;i++)
     gets(n[i]);
     for(round=1;round<=4;round++)
    {
     for(i=0;i<=4-round;i++)
     {
       comp=strcmp(n[i],n[i+1]);
       if(comp>0)
       {
           strcpy(s,n[i]);
           strcpy(n[i],n[i+1]);
           strcpy(n[i+1],s);
       }
     }
    }
    printf("\nDictionary order:\n");
    for(i=0;i<=4;i++)
puts(n[i]);
}
