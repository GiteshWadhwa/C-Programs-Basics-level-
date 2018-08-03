#include<stdio.h>
#include<conio.h>
main()
{
char str[5][10],s[10];
int r,i,round;
 printf("enter 5 strings: ");
 for(i=0;i<=4;i++)
  gets(str[i]);
 for(round=1;round<=4;round++)
 {
  for(i=0;i<=4-round;i++)
   {
     r=strcmp(str[i],str[i+1]);
  if(r>0)
  {
   strcpy(s,str[i]);
   strcpy(str[i],str[i+1]);
   strcpy(str[i+1],s);
  }
  }
 }
 printf("String in logical graphical order :\n");
 for(i=0;i<=4;i++)
 printf("%s\n",str[i]);
}
