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

void lietkecon(int a[],int n)
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < n; j++) 
        {
            for (int k = i; k <= j; k++) 
            {
                cout << a[k] << " ";
            }
            cout <<"\n";
        }
    }
}

int main() 
{
    int a[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    lietkecon(a,n);
    return 0;
}