#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sln=a;
    if (sln<b) sln=b;
    else sln=c;
    cout<<sln;
}
