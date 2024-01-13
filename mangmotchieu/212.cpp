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

int checknguyento(int n)
{
    int m=1;
    if (n==2)
    {
        m=1;
    }
    if (n<2)
    {
        m=0;
    }
    else
    {

        for (int dem=2; dem<n; dem++)
        {
            if(n % dem ==0)
            {
                m=0;
                break;
            }
        }
    }
    if (m==1)
    {
        return 1;
    }
    else return 0;
}
void nguyentotang(float a[],int n)
{
   for (int i=0; i<n-1; i++)
   {
        if (checknguyento(a[i])==1)
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
    nguyentotang(a,n);
    return 0;
}