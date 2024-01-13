#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p=1, n;
    cin >> n;
    for(int i=1; i<n; i++)
    {
        p*=2;
        if(n==p)
        {
            cout << "So nguyen 4 byte " << n << " co dang 2^k";
            return 0;
        }
    }
    cout << "So nguyen 4 byte " << n << " khong co dang 2^k";
    return 0;
}