#include<iostream>

#include<string.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    if (s[0]>='a' and s[0]<='z') s[0]=s[0]-32;

    for (int i = 1 ; i <s.length();i++)
        if (s[i-1]!=' ' and (s[i]>='A' and s[i] <='Z') ) s[i]=s[i]+32;
        else if (s[i-1] == ' ' and s[i]>='a' and s[i] <='z') s[i] =s[i]-32;
    while (s.find("  ")>0 and s.find("  ")<s.length()-1)
        {
            s.erase(s.find("  "),1);
        }
    while (s[0]==' ') s.erase(0,1);
    while (s[s.length()-1]==' ') s.erase(s.length()-1,1);
    cout<<s;
}