#include <bits/stdc++.h>
using namespace std;
int gcd(int ts,int ms){
    while(ms!=0){
        int r=ts%ms;
        ts=ms;
        ms=r;
    }
    return abs(ts);
    
}
int main ()
{
    int ts,ms;
    cin>>ts>>ms;
    if(ms < 0){
        ts = -ts;
        ms = -ms;
    }
    int ucln=gcd(ts,ms);
    ts/=ucln;
    ms/=ucln;
   if(ms==0){
       cout<<"INVALID";
   }
   else if(ms==1){
       cout<<ts;
   }
   else cout<<ts<<" "<<ms;
}

//Đơn giản phân số
