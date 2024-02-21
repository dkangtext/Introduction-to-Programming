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

void nhonhat(int a[],int n)
{
    int s=a[0];
    for (int i=1; i<n; i++)
    {
        if (a[i]<s)
        {
            s=a[i];
        }
    }
    cout<< "Gia tri nho nhat co trong mang "<<s<<"\n";
}

int main ()
{
    int a[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    nhonhat(a,n);
    return 0;
}