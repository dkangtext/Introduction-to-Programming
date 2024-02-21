#include <bits/stdc++.h>

using namespace std;

#define MAX 100

int main()
{
    float a[MAX][MAX];
    int n;
    cin >> n >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i != j && a[i][j] != 0)
            {
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
    return 0;
}
