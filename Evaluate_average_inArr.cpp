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
    double s=0,cnt=0,avg=0;
    for(int i=0;i<n;i++){
        if (a[i]%2!=0){
            s+=a[i];
            cnt++;
            avg=(double)s/cnt;
            
        }
    }
    cout<<fixed<<setprecision(4)<<avg;
}
