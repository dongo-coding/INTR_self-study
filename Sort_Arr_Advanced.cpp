#include <bits/stdc++.h>
using namespace std;

long long n, a[1000001], ma = -1e18;

int main() { 
    cin>>n; 
    for(int i=1;i<=n;i++) {
         cin>>a[i]; 
    }
   
sort (a+2, a + n);
for(int i=1;i<=n;i++){
    cout<<a[i]<<" ";
  }
}
