#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
int A[N + 5];
void motvedau(int &n)
{
    if (n <= 0)
    {
        cout << "Mang rong!" << endl;
        return;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != 1)
        {
            for (int j = i; j > count; j--) swap(A[j], A[j - 1]);
        } else {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "Khong tim thay so mot trong mang!" << endl;
    } else
    {
        cout << "Da dua so mot ve dau mang." << endl;
    }
}
int main()
{
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;
    cout << "Nhap mang " << n << " so nguyen:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    motvedau(n);
    cout << "Mang sau khi dua so mot ve dau mang: ";
    for (int i = 0; i < n; ++i)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
