#include<stdio.h>
main()
{
    int num1,num2,num3,num4,num5,sum,percentage,total=500;
    printf("Enter Numbers:\n");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
     sum=num1+num2+num3+num4+num5;
     printf("Sum = %d ",sum);
     percentage=(sum*100)/total;
     printf(" \npercentage is %d",percentage);

}
