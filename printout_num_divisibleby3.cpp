#include <bits/stdc++.h>
using namespace std;
int main(){
int a, b; 
cin >> a >> b;
b--; a++;
if ((b-a)<=3){
    bool ok = false; 
    for (int i=b; i>=a; i--){
        if (i%3==0){
            ok = true; cout << i << " "; 
        } 
    }
    if (not ok) cout << "NOT FOUND"; 
} 
else{
    for (int i=b; i>=a; i--){
        if (i%3==0) cout << i << " "; 
    } 
}
}
//In ra các phần tử chia hết cho 3
