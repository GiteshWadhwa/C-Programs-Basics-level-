#include<stdio.h>
#include<conio.h>
main()
{

  int num,x;
  printf("enter number(0-100):");
  scanf("%d",&num);
  while(num<100)
  {
      printf("%d\t",num);
      num=num+2;/*if we starts from 0 the logic prints even number
                  if we starts from 1 the logic prints odd number:*/

  }


}
