#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
int A[N + 5];
void daochan(int n)
{
    if (n <= 0)
    {
        cout << "Mang rong!" << endl;
        return;
    }
    int left = 0, right = n - 1;
    while (left < right)
        {
        while (left < right && A[left] % 2 == 0)
        {
            left++;
        }
        while (left < right && A[right] % 2 != 0)
        {
            right--;
        }
        if (left < right)
        {
            swap(A[left], A[right]);
            left++;
            right--;
        }
    }
    cout << "Da dao nguoc thu tu cac so chan trong mang." << endl;
}
int main()
{
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;
    cout << "Nhap mang " << n << " so nguyen:\n";
    for (int i = 0; i < n; ++i) cin >> A[i];
    daochan(n);
    cout << "Mang sau khi dao nguoc thu tu cac so chan: ";
    for (int i = 0; i < n; ++i) cout << A[i] << " ";
    cout << endl;
    return 0;
}
