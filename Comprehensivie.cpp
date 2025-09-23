#include <bits/stdc++.h>
using namespace std;

vector<int> a;

int timMax() {
    int max_val = INT_MIN;
    for (int x : a) if (x > max_val) max_val = x;
    return max_val;
}

int timMin() {
    int min_val = a[0];
    for (int x : a) if (x < min_val) min_val = x;
    return min_val;
}

int timViTriX(int x) {
    for (int i = 0; i < a.size(); i++)
        if (a[i] == x) return i;
    return -1;
}

void chenX(int x, int pos) {
    if (pos < 0 || pos > a.size()) return;
    a.insert(a.begin() + pos, x);
}

void xoaTaiViTri(int pos) {
    if (pos < 0 || pos >= a.size()) return;
    a.erase(a.begin() + pos);
}

void xuatMang() {
    cout << "Mang: ";
    for (int x : a) cout << x << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    a.resize(n);
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    int choice;
    do {
        cout << "\n===== Quan ly mang 1 chieu =====\n";
        xuatMang();
        cout << "1. Tim Max\n";
        cout << "2. Tim Min\n";
        cout << "3. Tim vi tri x\n";
        cout << "4. Chen x vao vi tri n\n";
        cout << "5. Xoa tai vi tri n\n";
        cout << "6. Thoat\n";
        cout << "Lua chon: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Max = " << timMax() << endl;
        } 
        else if (choice == 2) {
            cout << "Min = " << timMin() << endl;
        } 
        else if (choice == 3) {
            int x; cout << "Nhap x: "; cin >> x;
            int pos = timViTriX(x);
            if (pos == -1) cout << "Khong tim thay " << x << endl;
            else cout << "Tim thay " << x << " tai vi tri " << pos << endl;
        } 
        else if (choice == 4) {
            int x, pos;
            cout << "Nhap x: "; cin >> x;
            cout << "Nhap vi tri: "; cin >> pos;
            chenX(x, pos);
        } 
        else if (choice == 5) {
            int pos;
            cout << "Nhap vi tri: "; cin >> pos;
            xoaTaiViTri(pos);
        }

    } while (choice != 0);

    return 0;
}
