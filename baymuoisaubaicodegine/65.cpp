#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cout << "a.x^2 + b.x + c \n" << "Nhap a,b,c:\n";
    cin >>a>>b>>c;
    float delta=pow(b,2)-4*a*c;
    if(delta < 0)
    {
        cout << "Phuong trinh vo nghiem";
    }
    else if(delta == 0)
    {
        cout << "Phuong trinh co nghiem kep x1 = x2 = " << -float(b)/(2*a);
    }
    else
    {
        cout << "Phuong trinh co 2 nghiem phan biet:\n";
        cout << "x1 = " << float(-b+sqrt(delta))/(2*a);
        cout << "\nx2 = " << float(-b-sqrt(delta))/(2*a);
    }
    return 0;
}