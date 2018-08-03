#include<stdio.h>
int main()
{
    int w,a[102][102],d,s1=0,s2=0,n,i,j;
        scanf("%d",&n);
    for( i=0;i<n;i++)
        for( j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
                s1+=a[i][j];
            if(i+j==n-1)s2+=a[i][j];
        }
    d=s1-s2;
    w=-(d);
    printf("%d",w);
    return 0;
}
