#include <bits/stdc++.h>
using namespace std;
long long findMaxProduct(vector<long long>a){
    int n=a.size();

    if(n<2) return numeric_limits <long long>::min();

    sort(a.begin(),a.end());

    long long product1 = (long long )a[n-1] * a[n-2];
    long long product2 = (long long)a[0] * a[1];

    return max(product1,product2);


}
int main()
{
    int n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<findMaxProduct(a);

}  //Tìm tích lớn nhất giữa các phần tử trong mảng một chiều
