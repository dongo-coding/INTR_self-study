#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a[20],x;
    bool found=false;
    for(int i=1;i<=10;i++){
        cin>>a[i];
    }
    cin>>x;
    for(int i=1;i<=10;i++){
        if (a[i]==x){
            cout<<i<<" ";
            found=true;
        }
    }
    if (!found) cout<<"-1";
}
