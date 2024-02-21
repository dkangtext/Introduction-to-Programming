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

void vitrinhonhat(int a[],int n)
{
    int s=a[0];
    int m;
    for (int i=1; i<n; i++)
    {
        if (a[i]<s)
        {
            s=a[i];
            m=i;
        }
    }
    cout<< "Vi tri nho nhat co gia tri nho nhat trong mang "<<m<<"\n";
}
int main ()
{
    int a[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    vitrinhonhat(a,n);
    return 0;
}