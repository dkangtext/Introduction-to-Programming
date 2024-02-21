#include <bits/stdc++.h>;
using namespace std;
const long long N = 1e6;
double A[N + 5];
double tongcontang(double arr[], int n)
{
    double totalSum = 0;
    for (int i = 0; i < n; i++)
        {
        double sum = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[j - 1])
            {
                sum += arr[j];
                totalSum += sum;
            } else
            {
                break;
            }
        }
    }
    return totalSum;
}
int main()
{
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;
    cout << "Nhap mang " << n << " so thuc:\n";
    for (int i = 0; i < n; i++) cin >> A[i];
    double sum = tongcontang(A, n);
    cout << "Tong cac mang con tang trong mang: " << sum << endl;
    return 0;
}
