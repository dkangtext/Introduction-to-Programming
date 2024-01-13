#include <iostream>
using namespace std;

void nhapmang (float A[], int &n)
{
    for ( int i=0; i<n; i++ )
    {
        cout<< "Nhap phan tu thu "<<i<<" cua mang: ";
        cin>>A[i];
    }
}

void lietkevitrilonnhat(float a[],int n)
{
    int s=0;
    int m;
    for (int i=0; i<n; i++)
    {
        if (a[i]>s)
        {
            s=a[i];
            m=i;
        }
    }
    cout<< "Vi tri gia tri lon nhat co trong mang "<<m<<"\n";
}

int main ()
{
    float a[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    lietkevitrilonnhat(a,n);
    return 0;
}