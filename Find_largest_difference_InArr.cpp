#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_val = *max_element(a.begin(), a.end());
    int min_val = *min_element(a.begin(), a.end());

    cout << max_val - min_val;
}
//Tìm chênh lệch lớn nhất giữa phần tử nhỏ nhất và lớn nhất
