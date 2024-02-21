#include <iostream>
#include <math.h>
using namespace std;

void nhapmang(int A[], int &n)
{
    for ( int i=0; i<n; i++ )
    {
        cout<< "Nhap phan tu thu "<<i<<" cua mang: ";
        cin>>A[i];
    }
}

void tongchinhphuong(int a[],int n)
{
    int s=0;
    for (int i=0; i<n; i++)
    {
        for (int dem=1; dem<n; dem++)
        {
            if (pow(dem,2)== a[i])
            {
                s+=a[i];
            }
        }
    }
    cout<< "Tong cac phan tu chinh phuong co trong mang: "<<s<<"\n";
}

int main ()
{
    int a[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    tongchinhphuong(a,n);
    return 0;
}