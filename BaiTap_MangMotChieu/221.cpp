#include <iostream>
using namespace std;
const long long N = 1e6;
long long A[N + 5];
int n;
void themvitri(long long x, int k)
{
    if (k < 0 || k > n)
    {
        cout << "Vi tri chen khong hop le!" << endl;
        return;
    }
    for (int i = n; i > k; i--)
    {
        A[i] = A[i - 1];
    }
    A[k] = x;
    n++;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    int k;
    long long x;
    cout << "Nhap so theo format x va k: ";
    cin >> x >> k;
    themvitri(x, k);
    for (int i = 0; i < n; i++) cout << A[i] << " ";
    cout << endl;
    return 0;
}
