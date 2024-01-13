#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
int A[N + 5];
void lietkecon(int arr[], int n) {
    cout << "Cac mang con co do dai lon hon 2 la:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (j - i + 1 > 2)
            {
                for (int k = i; k <= j; k++) cout << arr[k] << " ";
                cout << endl;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;
    cout << "Nhap mang " << n << " so nguyen:\n";
    for (int i = 0; i < n; ++i) cin >> A[i];
    lietkecon(A, n);
    return 0;
}
