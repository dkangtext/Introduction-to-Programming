#include <iostream>
using namespace std;
const long long N = 1e6;
long long A[N + 5]; int n;
void thembaotoan(long long x)
{
    int i = n - 1;
    while (i >= 0 && A[i] > x)
    {
        A[i + 1] = A[i];
        i--;
    }
    A[i + 1] = x;
    n++;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    long long x;
    cout << "Nhap gia tri x muon chen: ";
    cin >> x;
    thembaotoan(x);
    cout << "Mang sau khi them: ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";
    cout << endl;
    return 0;
}
