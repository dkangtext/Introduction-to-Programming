#include <iostream>
using namespace std;

void nhapmang(float A[], int &n)
{
    for ( int i=0; i<n; i++ )
    {
        cout<< "Nhap phan tu thu "<<i<<" cua mang: ";
        cin>>A[i];
    }
}

void tongcuctri(float a[],int n)
{
    int s=0;
    for (int i=0; i<n; i++)
    {
        if ( a[i-1]<a[i] && a[i]>a[i+1] || a[i-1]>a[i] && a[i]<a[i+1] )
        {
            s+=a[i];
        }
    }
    cout<< "Tong cac phan tu cuc tri co trong mang: "<<s<<"\n";
}

int main ()
{
    float a[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    tongcuctri(a,n);
    return 0;
}