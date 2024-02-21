#include <bits/stdc++.h>
using namespace std;
int ChuSoLonNhat(int n)
{
    int m=0;
    while (n > 0) 
    {
		int temp = n%10;
		n/=10;
		if (temp > m)
			m = temp;
	}
    cout << m;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    ChuSoLonNhat(n);
    return 0;
}