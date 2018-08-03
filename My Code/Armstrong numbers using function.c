#include<stdio.h>
main()
{
int num;
int Armstrong(int);
 Armstrong(num);

}
Armstrong(x)
{
int i,rem,A;
 for(i=1;i<=1000;i++)
 {
    A=0;
    x=i;
   while(x)
   {
    rem=x%10;
    A=A+rem*rem*rem;
    x=x/10;
    }
   if(A==i)
    printf("%d\n",A);

 }
}
