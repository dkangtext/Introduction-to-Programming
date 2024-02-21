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

void sapxeptang(float a[],int n)
{
   for (int i=0; i<n-1; i++)
   {
        for (int j=i+1; j<n; j++)
        {
            if (a[j]<a[i])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
   }
   for (int i=0; i<n; i++)
   {
        cout << " "<< a[i];
   }
}

int main ()
{
    float a[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    sapxeptang(a,n);
    return 0;
}