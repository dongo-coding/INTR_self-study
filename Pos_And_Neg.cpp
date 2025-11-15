#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>neg,pos;
    for(int i=0;i<n;i++){
        if (a[i]<0) neg.push_back(a[i]);
        else pos.push_back(a[i]);
    }
    for(int i=0;i<neg.size();i++) cout<<neg[i]<<" ";
    for(int i=0;i<pos.size();i++) cout<<pos[i]<<" ";
} 
//In ra các phân tử trong mảng một chiều,sao cho thứ tự của các phần tử cùng âm hoặc cùng dương vẫn phải được giữ nguyên như ở mảng ban đầu
