#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int n,q;
    cin>>n>>q;
    int **v=new int*[n];//this line......we take 2d array. and in this we set how many arrays...
    for(int j=0;j<n;j++)
    {
        int k;//first size of array row..(pehle array me kitne element hai...)..
        cin>>k;
        v[j]=new int[k];//row...me kitne element hai....
        for(int i=0;i<k;i++)
        {
            cin>>v[j][i];
        }
    }
    for(int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<v[a][b]<<endl;
    }
    return 0;
    }

