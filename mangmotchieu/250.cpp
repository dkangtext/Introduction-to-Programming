#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
int A[N + 5];
void lietke(int arr[], int n)
{
    int maxValue = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }
    cout << "Cac day con tang chua gia tri lon nhat (" << maxValue << ") trong mang la:\n";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxValue)
        {
            for (int j = i; j < n; j++) {
                bool isIncreasing = true;
                for (int k = i; k < j; k++)
                {
                    if (arr[k] >= arr[k + 1])
                    {
                        isIncreasing = false;
                        break;
                    }
                }
                if (isIncreasing)
                {
                    for (int k = i; k <= j; k++)
                    {
                        cout << arr[k] << " ";
                    }
                    cout << endl;
                }
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
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    lietke(A, n);
    return 0;
}
