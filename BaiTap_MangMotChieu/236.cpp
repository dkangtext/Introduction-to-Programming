#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
int A[N + 5];
void daomang(int &n)
{
    if (n <= 0)
    {
        cout << "Mang rong!" << endl;
        return;
    }
    int left = 0, right = n - 1;
    while (left < right) {
        swap(A[left], A[right]);
        left++;
        right--;
    }
    cout << "Da dao nguoc mang." << endl;
}
int main()
{
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;
    cout << "Nhap mang " << n << " so nguyen:\n";
    for (int i = 0; i < n; ++i) cin >> A[i];
    daomang(n);
    cout << "Mang sau khi dao nguoc: ";
    for (int i = 0; i < n; ++i)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
