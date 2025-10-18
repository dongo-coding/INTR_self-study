#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<int>res;
    for(int t=0;t<n;t++){
        string s;
        getline(cin,s);
        
        int cnt=0;
        bool in_space=false;
        for(char c : s){
            if (c==' '){
                if(!in_space){
                    cnt++;
                    in_space=true;
                }
            }
            else {
                in_space=false;
            }
            
        }
        res.push_back(cnt);
    }
    for(int x : res) cout<<x<<" ";  
  
} 
//Đếm khoảng trắng trong từng chuỗi
