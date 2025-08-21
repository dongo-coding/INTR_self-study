#include <bits/stdc++.h>
using namespace std;
int main ()
{
    double a,b;
    char ope;
    cin>>a>>ope>>b;
    if (ope=='+'){
        cout<<fixed<<setprecision(2)<<a+b;
    }
    else if (ope=='-'){
        cout<<fixed<<setprecision(2)<<a-b;
    }
    else if (ope=='*'){
        cout<<fixed<<setprecision(2)<<a*b;
    }
    else if (ope=='/'){
        if (b!=0){
            cout<<fixed<<setprecision(2)<<a/b;
        }
        else cout<<"Math Error";
    }
}
