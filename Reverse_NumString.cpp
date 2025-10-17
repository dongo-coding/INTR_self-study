#include <bits/stdc++.h>
using namespace std;
int main () {
string s;

cin >> s;

while (!s.empty() && s.back() == '0') {

    s.pop_back();

}

reverse(s.begin(), s.end());

cout << s;
}

//đảo ngược chuỗi
