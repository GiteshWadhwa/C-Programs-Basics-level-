#include<stdio.h>
#include<conio.h>
main()
{
  char a[4][10],s[10];
  int i,round,r;
  printf("enter 4 strings:");
  for(i=0;i<=3;i++)
  gets(a[i]);
  for(round=1;round<=3;round++)
  {
    for(i=0;i<=3-round;i++)
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
  printf("\nDictionary sorting is:\n");
  for(i=0;i<=3;i++)
  puts(a[i]);



}
