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
    int max_value=INT_MIN, second_maxvalue=INT_MIN;
    for(int i=0;i<n;i++){
        if (a[i]>max_value){
            second_maxvalue=max_value;
            max_value=a[i];
        }
        else if (a[i]>second_maxvalue && a[i]<max_value){
            second_maxvalue=a[i];
        }
    }
    if (second_maxvalue==INT_MIN){
        cout<<"NOT FOUND";
    }
    else cout<<second_maxvalue;
}
