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

void tao(int a[], int n, int b[], int& m) {
    m = 0;
    for (int i = 0; i < n; i++) 
    {
        if (i==0)
        {
            b[m]=a[i+1];
        }
        if(i==n-1)
        {
            b[m]=a[i-1];
        }
        if(i!=0 && i!=n-1)
        {
        b[m] = a[i-1]+a[i+1];
        }
        m++;
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
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }
    return 0;
}