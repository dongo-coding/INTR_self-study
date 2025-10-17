#include <bits/stdc++.h>
using namespace std;
bool isSquareNum(int n){
    if (n<0) return false;
    int k=sqrt(n);
    return k*k==n;
}
int main ()
{
    int a[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    vector<int>v;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (isSquareNum(a[i][j])){
                v.push_back(a[i][j]);
            }
        }
    }
    
    if (v.empty()) cout<<"NOT FOUND";
    
    else {
        sort(v.begin(),v.end());
        
        v.erase(unique(v.begin(),v.end()),v.end());
        
        for(int x : v) cout<<x<<" ";
    }
    
}
//Tìm và in ra số chính phương trong mảng 2 chiều (ma trận), chỉ in đại diện 1 số nếu trùng
