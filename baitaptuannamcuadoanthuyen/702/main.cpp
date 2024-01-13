#include <iostream>

using namespace std;

#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);

int Fibonacci(int n)
{
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int k;
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        for (k = 2; k < n; k++)
        {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}

void Nhapmang(int a[][MAX], int &n)
{
	cin >> n;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			a[i][j] = Fibonacci(i+j+1);
		}
	}
}

void Xuatmang(int a[][MAX], int n)
{
    for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}

int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);
    return 0;
}
