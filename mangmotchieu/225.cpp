#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
int A[N + 5];
void xoavitri(int &n, int k)
{
    if (k < 0 || k >= n)
    {
        cout << "Vi tri xoa khong hop le!" << endl;
        return;
    }
    for (int i = k; i < n - 1; i++)
    {
        A[i] = A[i + 1];
    }
    n--;
}
int main()
{
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;
    cout << "Nhap mang " << n << " so nguyen:\n";
    for (int i = 0; i < n; ++i) cin >> A[i];
    int k;
    cout << "Nhap vi tri phan tu can xoa: ";
    cin >> k;
    xoavitri(n, k);
    cout << "Mang sau khi xoa phan tu co vi tri " << k << ": ";
    for (int i = 0; i < n; ++i) cout << A[i] << " ";
    cout << endl;
    return 0;
}
