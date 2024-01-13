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

void demchan(int a[],int n)
{
    int s=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]%2==0)
        {
            s+=1;
        }
    }
        cout<< "Tong so chan co trong mang: "<<s<<"\n";
}

int main ()
{
    int a[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    demchan(a,n);
    return 0;
}