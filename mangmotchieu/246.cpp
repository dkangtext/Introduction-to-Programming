#include <iostream>
#include <cmath>
using namespace std;

void nhapmang(double A[], int &n)
{
    for ( int i=0; i<n; i++ )
    {
        cout<< "Nhap phan tu thu "<<i<<" cua mang: ";
        cin>>A[i];
    }
}

void nguyenhoa(double a[], int n) 
{
    for (int i = 0; i<n; i++) 
    {
        a[i] = round(a[i]);
    }
     for (int dem = 0; dem<n; dem++) 
    {
        cout << a[dem]<< " ";
    }
}

int main() 
{
    double a[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    nguyenhoa(a,n);
    return 0;
}