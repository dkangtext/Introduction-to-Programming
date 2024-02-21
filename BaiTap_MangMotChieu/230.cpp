#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
int A[N + 5];
void xoatrungx(int &n, int x) {
    if (n <= 0) {
        cout << "Mang rong!" << endl;
        return;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == x)
        {
            count++;
            for (int j = i; j < n - count; j++)
            {
                A[j] = A[j + 1];
            }
            i--;
            n--;
        }
    }
    if (count == 0)
    {
        cout << "Khong tim thay phan tu trung voi " << x << " trong mang!" << endl;
    } else
    {
        cout << "Da xoa " << count << " phan tu trung voi " << x << " trong mang." << endl;
    }
}
int main()
{
    int n, x;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;
    cout << "Nhap mang " << n << " so nguyen:\n";
    for (int i = 0; i < n; ++i)
    cin >> A[i];
    cout << "Nhap gia tri x muon xoa: ";
    cin >> x;
    xoatrungx(n, x);
    cout << "Mang sau khi xoa phan tu trung voi " << x << ": ";
    for (int i = 0; i < n; ++i) cout << A[i] << " ";
    cout << endl;
    return 0;
}
