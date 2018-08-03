#include<stdio.h>
#include<conio.h>
main()
{
  int str[10],i,temp,round;

  printf("enter 10 numbers randomly:");
   for(i=0;i<=9;i++)
   scanf("%d",&str[i]);


  for(round=1;round<=9;round++)
  {
   for(i=0;i<=9-round;i++)
   {
        if(str[i]>str[i+1])
  {
   temp=str[i];
   str[i]=str[i+1];
   str[i+1]=temp;
  }
   }
   }
   printf("dictionary sort is :\n");
   for(i=0;i<=9;i++)
   printf("%d\t",str[i]);

}
