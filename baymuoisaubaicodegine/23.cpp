#include <iostream>
using namespace std;
int DemUoc(int n)
{
    int s = 0;
    for( int i = 1; i<=n ; i++)
    {
        if( n % i == 0 )
        {
            s ++;
        }
    }
    cout << s;
    return 0;
}
int main()
{
    int n; 
    cin >> n;
    DemUoc(n);
    return 0;
}