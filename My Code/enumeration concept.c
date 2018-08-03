#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<float.h>
#include<stddef.h>
main()
{
    enum days{mon,tue,wed,thu,fri,sat,sun};
    int num;
    enum days d;
    printf("Enter The Number For Day(0-6):\n");
    scanf("%d",&num);
    d=num;
    if(d==sat||d==sun)
    {
        printf("weekend!");
    }
    else
    {
        printf("working day!");
    }
    getch();
    return 0;
}
