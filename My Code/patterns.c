#include<stdio.h>
#include<conio.h>
main()
{
  int num,n,i,j,sp;
  char ch = 'A';
  printf("enter numbers:");
  scanf("%d",&num);
  n=num;
  for(i=1;i<=num;i++)
  {
      for(sp=1;sp<=n;sp++)
      {
          printf(" ");
      }
        n--;
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
        }
        ch++;
        printf("\n");
}
getch();
return 0;
}
