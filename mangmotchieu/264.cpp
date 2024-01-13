#include <iostream>
using namespace std;

void nhapmang(int A[], int &n)
{
    for ( int i=0; i<n; i++ )
    {
        cout<< "Nhap phan tu thu "<<i<<" cua mang: ";
        cin>>A[i];
    }
}

int checknguyento(int n)
{
    int m=1;
    if (n==2)
    {
        m=1;
    }
    if(n<2)
    {
        m=0;
    }
    else
    {

        for (int dem=2; dem<n; dem++)
        {
            if( n% dem ==0)
            {
                m=0;
                break;
            }
        }
    }
    if (m==1)
    {
        return 1;
    }
    else return 0;
}

void tao(int a[], int n, int b[], int& m) 
{
    m = 0;
    for (int i = 0; i < n; i++)
    {
        if (checknguyento(a[i]) == 1)
        {
            b[m] = a[i];
            m++;
        }
    }
}

int main() {
    int a[100];
    int n;
    int b[100], m;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    tao(a, n, b, m);
    for (int i = 0; i < m; i++)
    {
        cout << b[i]<< " ";
    }
    return 0;
}