#include <bits/stdc++.h>

using namespace std;

#define MAX 100

int main()
{
    float VetMatran=0;
    float Matran[MAX][MAX];

    int n;
    cin >> n >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> Matran[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                VetMatran += Matran[i][j];
            }
        }
    }

    cout << VetMatran;

    return 0;
}
