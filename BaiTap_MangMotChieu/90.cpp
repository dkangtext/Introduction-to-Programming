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

void lonnhat(int a[],int n)
{
    int s=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]>s)
        {
            s=a[i];
        }
    }
    cout<< "Gia tri lon nhat co trong mang "<<s<<"\n";
}

int main ()
{
    int a[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    lonnhat(a,n);
    return 0;
}