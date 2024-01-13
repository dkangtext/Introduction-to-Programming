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

void tontaichan (int a[],int n)
{
    int m=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]%2==0)
        {
            m=1;
            break;
        }
    }
    cout<<m;
}

int main ()
{
    int a[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    tontaichan(a,n);
    return 0;
}