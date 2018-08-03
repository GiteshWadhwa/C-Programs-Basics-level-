#include<stdio.h>
#include<conio.h>
main()
{
    int num,table=0,i,x;
    printf("enter table number");
    scanf("%d",&num);
    table=num;
    for(i=1;i<=10;i++)
    {
      x=table*i;
      printf("%d\n",x);
    }


}
