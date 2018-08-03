 #include<stdio.h>
 int main()
 {
     int a,b,sum,diff,prod,quotient,rem;
     printf("Enter Two Numbers\n");
     scanf("%d%d",&a,&b);
     sum = a+b;
     diff = a-b;
     prod = a*b;
     quotient = a/b;
     rem = a%b;
     printf("The Sum Is %d\nThe Difference Is %d\nThe Product Is %d\nThe Quotient Is %d\nThe Remainder Is %d",sum,diff,prod,quotient,rem);
     return 0;
 }
