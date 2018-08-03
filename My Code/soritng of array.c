#include<stdio.h>
#include<conio.h>
main()
{
    char a[3][10],s[10];
    int r,i,round;

    printf("enter 3 strings:");
    for(i=0;i<=2;i++)
        gets(a[i]);

    for(round=1;round<=2;round++)
  {
        for(i=0;i<=1;i++)
    {
    r = strcmp(a[i],a[i+1]);//if both entered strings are same ..then this function will give negative value..i.e both are in dctnry order
    if(r>0)
       {
        strcpy(s,a[i]);
       strcpy(a[i],a[i+1]);
       strcpy(a[i+1],s);
       }
    }
  }
  printf("\nDictionary arrangement is \n");
  for(i=0;i<=2;i++)
    puts(a[i]);
}
