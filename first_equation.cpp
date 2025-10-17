#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    if(a==0){
        if(b==0){
            cout<<"WOW";
        }
        else if(b!=0){
            cout<<"NO";
        }
    }
    if(a!=0){
        cout<<fixed<<setprecision(2)<<(double)-b/a;
    }
}
//In ra nghiệm của phương trình bậc nhất
