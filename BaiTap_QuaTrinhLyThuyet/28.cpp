#include <iostream>
using namespace std;
int TongUoc(int n)
{
    int s = 0;
    for( int i = 1; i<n ; i++)
    {
        if( n % i == 0 )
        {
            s += i;
        }
    }
    cout << s;
    return 0;
}
int main()
{
    int n; 
    cin >> n;
    TongUoc(n);
    return 0;
}