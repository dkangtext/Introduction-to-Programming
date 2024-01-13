#include <iostream>
using namespace std;
void Nhap_mang(int A[], int &n)
{
    for ( int i=0; i<n; i++ )
    {
        cout<< "Nhap phan tu thu "<<i<<" cua mang: ";
        cin>>A[i];
    }
}

void tbnguyento(int A[], int &n)
{
    int m=1;
    int s=0;
    int dem=0;
    for (int i=0; i<n;i++)
    {
        if (A[i]==2)
        {
            s+=A[i];
            dem++;
        }
        if (A[i]>2)
        {
            for (int dem=2; dem<A[i]; dem++)
            {
                if( A[i] % dem ==0)
                {
                    m=0;
                    break;
                }
            }
            if (m==1)
            {
                s+=A[i];
                dem++;
            }
        }
    }
    cout<<"Trung binh cac so nguyen to co trong mang: "<<(float)s/dem<<"\n";
}
int main()
{
    int A[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    Nhap_mang(A,n);
    tbnguyento(A,n);
    return 0;
}