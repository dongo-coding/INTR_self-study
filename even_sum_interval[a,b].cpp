#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long S=0;
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if (i%2==0){
            S+=i;
        }
    }
    cout<<S;
}
//Tính tổng các số chẵn trong đoạn
