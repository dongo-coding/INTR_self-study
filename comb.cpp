#include <bits/stdc++.h>
using namespace std;
long long comb(int n,int k){
    if (k==n || k==0) return 1;
    else return comb(n-1,k-1) + comb(n-1,k);
}
int main ()
{
    int n,k;
    cin>>n>>k;
    cout<<comb(n,k);
}
//Dùng đệ quy tính tổ hợp chập k của n
