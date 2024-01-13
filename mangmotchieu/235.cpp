#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
int A[N + 5];
void chandaulecuoi(int &n)
{
    if (n <= 0)
    {
        cout << "Mang rong!" << endl;
        return;
    }
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (A[left] % 2 == 0)
        {
            left++;
        } else if (A[right] % 2 != 0)
        {
            right--;
        } else
        {
            if (A[left] == 0 && A[right] == 0)
            {
                swap(A[left], A[right]);
                left++;
                right--;
            } else {
                swap(A[left], A[right]);
            }
        }
    }

    cout << "Da sap xep mang theo yeu cau." << endl;
}
int main()
{
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;
    cout << "Nhap mang " << n << " so nguyen:\n";
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    chandaulecuoi(n);
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
