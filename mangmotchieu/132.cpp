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

void lietkeam (float a[],int n)
{
    int m=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]<0)
        {
            m=1;
            break;
        }
        else m=-1;
    }
    if (m==1)
    {
        cout<< "Cac gia tri am co trong mang: ";
         for (int i=0; i<n; i++)
        {
            if (a[i]<0)
            {
                cout << a[i]<<"; ";
            }
        }
    }
    else cout <<m;
}

int main ()
{
    float a[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    lietkeam(a,n);
    return 0;
}