//most important pattern
#include<stdio.h>
main()
{
 int i,j,k;
 for(i=1;i<=5;i++)
 {
     k=1;
  for(j=1;j<=9;j++){

   if(j>=6-i  &&  j<=4+i && k)      //k=0 false and k=1 true..k ki value jb print hoga word to 1 hogi or jb nhi hoga print to 0 hogi..(togle karegi value::!!)
    {
       printf("*");
       k=0;
   }
   else{
   printf(" ");
   k=1;

   }
}

   printf("\n");
  }
}


