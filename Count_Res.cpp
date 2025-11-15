#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt_res=0;
    int max_right = a[n-1];
    for(int i=n-2;i>=0;i--){
        if (a[i]>max_right) {
            cnt_res++;
        }
        max_right=max(max_right, a[i]);
    }
    cout<<cnt_res;
    } // Đếm các phần tử thủ lĩnh biết rằng phần tử thủ lĩnh là các phần tử lớn hơn toàn bộ các phần tử bên phải 
