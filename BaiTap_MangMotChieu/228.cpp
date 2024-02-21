#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
double A[N + 5];
void xoaam(int &n) {
    if (n <= 0)
    {
        cout << "Mang rong!" << endl;
        return;
    }
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (A[i] < 0) {
            count++;
            for (int j = i; j < n - count; j++) A[j] = A[j + 1];
            i--;
            n--;
        }
    }
    if (count == 0)
    {
        cout << "Khong tim thay so am trong mang!" << endl;
    } else
    {
        cout << "Da xoa " << count << " so am trong mang." << endl;
    }
}
int main()
{
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;
    cout << "Nhap mang " << n << " so thuc:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    xoaam(n);
    cout << "Mang sau khi xoa cac so am: ";
    for (int i = 0; i < n; ++i)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
