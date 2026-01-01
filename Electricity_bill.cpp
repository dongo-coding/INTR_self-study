#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x,a,b,c,d;
    cin>>x>>a>>b>>c>>d;
    int gtd=0;
    if (x>151){
        gtd+=(x-150)*d;
        x=150;
    }
    if(x>100){
        gtd+=(x-100)*c;
        x=100;
    }
    if (x>50){
        gtd+=(x-50)*b;
        x=50;
    }
    if (x>0){
        gtd+=x*a;
    }
    cout<<gtd;
}
