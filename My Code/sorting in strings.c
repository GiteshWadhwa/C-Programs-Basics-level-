#include<stdio.h>
#include<conio.h>
main()
{
  char str[5][10],s[10];
  int r,i,round;
  printf("enter 5 strings:");
  for(i=0;i<=4;i++)
  gets(str[i]);

  for(round=1;round<=4;round++)
  {
      for(i=0;i<=4-round;i++)
      {

         r=strcmp(str[i],str[i+1]);

        if(r>0)//if the entered strings are already in the dictionary order then result is -ve 0if not the result is positive then swaping takes place
   {
    strcpy(s,str[i]);
    strcpy(str[i],str[i+1]);
    strcpy(str[i+1],s);
    }

  }


}
printf("\nStrings in dictionary order\n");
for(i=0;i<=4;i++)
    puts(str[i]);
}
