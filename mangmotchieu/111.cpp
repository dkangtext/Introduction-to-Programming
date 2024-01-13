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

void xanhat(int a[], int n, int x)
{
   int m,temp;
   int xanhat;
   for ( int i=0; i<n; i++)
   {
        m=abs(x-a[i]);
        if (m>temp)
        {
            temp=m;
            xanhat=a[i];
        }
   }
   cout<<"Gia tri xa nhat voi x: "<<xanhat;
}

int main ()
{
    int a[100];
    int n;
    int x;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    cout<<"Nhap gia tri x: ";
    cin>>x;
    xanhat(a,n,x);
    return 0;
}