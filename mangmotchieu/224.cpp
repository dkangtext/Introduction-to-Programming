#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
int A[N + 5];
void nhapbaotoan(int n)
{
    for (int i = 0; i < n; i++) cin >> A[i];
    sort(A, A + n);
}
int main()
{
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;
    cout << "Nhap mang " << n << " so nguyen:\n";
    nhapbaotoan(n);
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; ++i) cout << A[i] << " ";
    cout << endl;
    return 0;
}
