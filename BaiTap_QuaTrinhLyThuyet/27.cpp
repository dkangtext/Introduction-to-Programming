#include <iostream>
using namespace std;
int DemUocSoChan(int n)
{
    int s = 0;
    for( int i = 1; i<=n ; i++)
    {
        if( n % i == 0 )
        {
            if(i%2 == 0)
            {
                s ++;
            }
        }
    }
    cout << s;
    return 0;
}
int main()
{
    int n; 
    cin >> n;
    DemUocSoChan(n);
    return 0;
}