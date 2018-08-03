#include <stdio.h> 
void main ()
{
    int size,i;
    printf("enter size:");
    scanf("%d",&size);
    int a[size],round,t;
    printf("Enter the numbers \n");
    for (i = 0; i < size; ++i)
    scanf("%d", &a[i]);
    for (round=0;round<size-1;round++)
    {
        for (i=0;i<size-1-round;i++)
        {
            if (a[i]<a[i+1])
            {
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }
    }
    printf("The numbers arranged in descending  \n");
    for (i = 0; i < size; ++i)
    {
        printf("%d\n", a[i]);
    }
    printf("The 2nd largest number is  = %d\n", a[1]);
    printf("The 2nd smallest number is = %d\n", a[size - 2]);
}
