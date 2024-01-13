#include <bits/stdc++.h>
using namespace std;
int DemChuSoNhoNhat(int n)
{
    int m = n%10, dem = 0;
    while (n > 0) 
    {
		int t = n%10;
		n/=10;
		if (t < m)
        {
			m = t;
            dem = 0;
        }
        if (t == m)
        {
            dem++;
        }        
	}
    cout << dem;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    DemChuSoNhoNhat(n);
    return 0;
}