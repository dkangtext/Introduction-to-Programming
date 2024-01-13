#include <iostream>
using namespace std;

const long long N = 1e6;
long long A[N + 5], B[N + 5];
int n;
void taomangchanle() {
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            B[i] = 0;
        } else {
            B[i] = 1;
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    taomangchanle();
    cout << "Mang B sau khi tao: ";
    for (int i = 0; i < n; i++) cout << B[i] << " ";
    cout << endl;
    return 0;
}
