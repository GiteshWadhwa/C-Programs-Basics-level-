#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char arr[10000];
  int n,l,i,j;
     scanf("%d",&n);
    for( j=0;j<n;j++)
    {
              scanf(" %[^\n]",arr);
            l=strlen(arr);

                for(i=0;i<l;i++)
                {
                    if(i%2==0)
                        printf("%c",arr[i]);

            }
            printf(" ");
    }
            for( i=1;i<l;i++)
            {        if(i%2!=0)
                    printf("%c",arr[i]);
            }
            printf("\n");
    }


