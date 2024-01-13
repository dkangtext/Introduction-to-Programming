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

void gannhat(int a[], int n, int x)
{
   int m;
   int temp=abs(x-a[0]);
   int gannhat;
   for ( int i=1; i<n; i++)
   {
        m=abs(x-a[i]);
        if (m<temp)
        {
            temp=m;
            gannhat=a[i];
        }
   }
   cout<<"Gia tri xa nhat voi x: "<<gannhat;
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
    gannhat(a,n,x);
    return 0;
}