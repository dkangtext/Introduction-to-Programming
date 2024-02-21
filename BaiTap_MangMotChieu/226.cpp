#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
int A[N + 5];
void xoalonnhat(int &n) {
    if (n <= 0) {
        cout << "Mang rong!" << endl;
        return;
    }
    int maxVal = A[0];
    for (int i = 1; i < n; ++i)
    {
        maxVal = max(maxVal, A[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == maxVal) {
            count++;
            for (int j = i; j < n - count; ++j) A[j] = A[j + 1];
            i--;
            n--;
        }
    }
    if (count == 0)
    {
        cout << "Khong tim thay so lon nhat trong mang!" << endl;
    } else
    {
        cout << "Da xoa " << count << " so lon nhat trong mang." << endl;
    }
}
int main()
{
    int n;
    cout << "Nhap so luong phan tu trong mang: "; cin >> n;;
    cout << "Nhap mang " << n << " so nguyen:\n";
    for (int i = 0; i < n; ++i) cin >> A[i];
    xoalonnhat(n);
    cout << "Mang sau khi xoa cac so lon nhat: ";
    for (int i = 0; i < n; ++i) cout << A[i] << " ";
    cout << endl;
    return 0;
}
