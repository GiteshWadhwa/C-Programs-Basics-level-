#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    while(num<100)
    {
        printf("%d\t",num);
        num++;
    }
    getch();
    return 0;
}
