#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main () {
    int a,b;
    cin>>a>>b;
    a=abs(a);
    b=abs(b);
    int ucln=gcd(a,b);
    int bcnn= abs(a*b)/ucln;
    cout<<bcnn;
    
}
