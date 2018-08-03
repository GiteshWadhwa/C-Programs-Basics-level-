#include<stdio.h>
#include<conio.h>
#include<math.h>
 main()
{
    float prin,rate,time,si,ci;

    printf("Enter Value of principle:\n");
    scanf("%f",&prin);
    printf("Enter Value Of rate:\n");
    scanf("%f",&rate);
    printf("Enter Value Of period:\n");
    scanf("%f",&time);
    si=(prin*rate*time)/100;
    ci=prin*(pow((1+rate/100),time)-1);
    printf("Simple interest is %.2f\nCompound interest is %.2f",si,ci );
    getch();
    return 0;
}
