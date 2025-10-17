#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    if (n==0)  cout<<"INF";
    for(int i=abs(n);i>=1;i--){
        if (n%i==0){
            cout<<i<<" ";
        }
    }
}
//Tìm tất cả các ước
