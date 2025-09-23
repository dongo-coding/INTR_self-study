#include <iostream>
using namespace std;

void nhapMang(int a[], int &n) {
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void xuatMang(int a[], int n) {
    cout << "Mang: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int timMax(int a[], int n) {
    int maxVal = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > maxVal) maxVal = a[i];
    return maxVal;
}

int timMin(int a[], int n) {
    int minVal = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < minVal) minVal = a[i];
    return minVal;
}

int timViTriX(int a[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (a[i] == x) return i; // trả về vị trí đầu tiên
    return -1; // không tìm thấy
}

void chenX(int a[], int &n, int x, int pos) {
    if (pos < 0 || pos > n) {
        cout << "Vi tri chen khong hop le!\n";
        return;
    }
    for (int i = n; i > pos; i--) a[i] = a[i-1];
    a[pos] = x;
    n++;
}

void xoaTaiViTri(int a[], int &n, int pos) {
    if (pos < 0 || pos >= n) {
        cout << "Vi tri xoa khong hop le!\n";
        return;
    }
    for (int i = pos; i < n-1; i++) a[i] = a[i+1];
    n--;
}

int main() {
    int a[100], n;
    nhapMang(a, n);
    
    int choice;
    do {
        cout << "\n=== MENU ===\n";
        cout << "1. Xuat mang\n";
        cout << "2. Tim max\n";
        cout << "3. Tim min\n";
        cout << "4. Tim vi tri cua x\n";
        cout << "5. Chen x vao vi tri n\n";
        cout << "6. Xoa phan tu tai vi tri n\n";
        cout << "0. Thoat\n";
        cout << "Chon: ";
        cin >> choice;
        
        if (choice == 1) {
            xuatMang(a, n);
        } else if (choice == 2) {
            cout << "Max = " << timMax(a, n) << endl;
        } else if (choice == 3) {
            cout << "Min = " << timMin(a, n) << endl;
        } else if (choice == 4) {
            int x; cout << "Nhap x: "; cin >> x;
            int pos = timViTriX(a, n, x);
            if (pos == -1) cout << "Khong tim thay " << x << endl;
            else cout << "Tim thay " << x << " tai vi tri " << pos << endl;
        } else if (choice == 5) {
            int x, pos;
            cout << "Nhap x: "; cin >> x;
            cout << "Nhap vi tri: "; cin >> pos;
            chenX(a, n, x, pos);
        } else if (choice == 6) {
            int pos;
            cout << "Nhap vi tri can xoa: "; cin >> pos;
            xoaTaiViTri(a, n, pos);
        }
    } while (choice != 0);
    
    return 0;
}
