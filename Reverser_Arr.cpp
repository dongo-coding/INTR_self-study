#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int A[1000];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=n-1;i>=0;i--){
        if ((i+1)%2==1){
            cout<<A[i]<<" ";
        }
    }
} //In ra mảng sau khi đã đảo ngược các phần tử ở vị trí lẻ
