#include <bits/stdc++.h>
using namespace std;
int ChuSoNhoNhat(int n)
{
    int m = n%10;
    while (n > 0) 
    {
		int t = n%10;
		n/=10;
		if (t < m)
        {
			m = t;
        }
	}
    cout << m;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    ChuSoNhoNhat(n);
    return 0;
}