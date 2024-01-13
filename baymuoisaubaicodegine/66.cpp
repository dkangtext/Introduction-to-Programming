#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cout  << "a.x^4 + b.x^2 + c = 0 \n" << "Nhap a,b,c:\n";
    cin >>a>>b>>c;
    float result;
    float delta=pow(b,2)-4*a*c;
    if(delta < 0)
    {
        cout << "Phuong trinh vo nghiem";
    }
    else if(delta == 0)
    {
        result = -float(b)/(2*a);
        if(result > 0)
        {
            cout << "Phuong trinh co 2 nghiem: \n x1 = " << result << "\n x2 = " << -result;
        }
        else if(result == 0)
        {
            cout << "Phuong trinh co nghiem x = 0";
        }
    }
    else
    {
        result = float(-b+sqrt(delta))/(2*a);
        cout << "Phuong trinh co 4 nghiem:\n";
        cout << "x1 = " << result;
        cout << "\nx2 = " << -result;
        result = float(-b-sqrt(delta))/(2*a);
        cout << "\nx3 = " << result;
        cout << "\nx4 = " << -result;
    }
    return 0;
}