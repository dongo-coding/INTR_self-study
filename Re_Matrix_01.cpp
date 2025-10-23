#include <bits/stdc++.h>
using namespace std;

int main() {

    long long m, n,q_input;
    if (!(cin >> m >> n >> q_input)) {
        return 1;
    }

    
    const long long MAX_DIM = INT_MAX;
    if (m <= 0 || n <= 0) {
        return 1;
    }
    if (m > MAX_DIM || n > MAX_DIM || m * n > 10000000LL) {
        return 1;
    }

    long long q = q_input - 1;
    if (q < 0 || q >= m) {
        return 1;
    }


    vector<vector<long long>> a(m, vector<long long>(n));

 
    for (long long i = 0; i < m; i++) {
        for (long long j = 0; j < n; j++) {
            if (!(cin >> a[i][j])) {
                return 1;
            }
        }
    }


    sort(a[q].begin(), a[q].end());


    for (long long i = 0; i < m; i++) {
        for (long long j = 0; j < n; j++) {
            if (j) cout << ' ';
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
//Sắp xếp ma trận sao cho hàng q tăng dần
