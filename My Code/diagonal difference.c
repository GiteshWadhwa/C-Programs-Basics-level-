#include<stdio.h>
int main()
{

    int a[102][102],d,s1=0,s2=0,n,i,j;

        scanf("%d",&n);

    for( i=0;i<n;i++)
{

        for( j=0;j<n;j++)

        {

            scanf("%d",&a[i][j]);

            if(i==j)
s1+=a[i][j];

            if(i+j==n-1)s2+=a[i][j];

        }

    }printf("%d\n",d=s1-s2);

    return 0;

}
