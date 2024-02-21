#include<iostream>
using namespace std;
int ktht(int n)
{
    int s = 0;
    for(int i=1; i <= (n-1); i++)
    {
        if(n%i == 0)
        {
            s += i;
        }
    }
    if(s == n)
    {
        cout << "n la so hoan thien";
        return 0;
    }
    cout << "n ko phai la so hoan thien";
    return 0;
}
int main()
{
    int n;
    cin >> n;
    ktht(n);
    return 0;
}