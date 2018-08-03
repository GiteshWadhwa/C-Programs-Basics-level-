#include <stdio.h>
    int main()
    {

        int arr[5]={1,5,3,4,5},i,w,p,flag=0;
        printf("Enter the element to be updated : ");
        scanf("%d",&w);
        printf("Enter element to place : ");
        scanf("%d",&p);
        for(i=0;i<5;i++)
        {
            if(arr[i]==w)
            {
                arr[i]=p;
                flag=1;
            }
        }
        if(flag)
        {
            printf("Array updated :\n ");
            for(i=0;i<5;i++)
            {
                printf("%d\t",arr[i]);
            }
        }else
        {
            printf("Element Not Found ..!!!!\n");
            for(i=0;i<5;i++)
            {
                printf("%d\t",arr[i]);
            }
        }



    }
