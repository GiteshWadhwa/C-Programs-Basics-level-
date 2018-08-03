#include<iostream>
using namespace std;
int main(){
cin >> n >> q; n hogya first input,q hogya doosra
    int **v = new int*[n]; variable size array
    for(int j=0;j<n;j++)
    {
        int k; elements pehla
        cin >> k;
        v[j] = new int[k];//pehle me store kraye
        for(int i=0;i<k;i++){
            int x; doosra element
            cin >> x;
            v[j][i] = x;
        }
    }
}
