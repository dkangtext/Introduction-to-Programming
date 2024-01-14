
#include <iostream>
#include <string>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	cin.getline(s1,MAX);
	cin.getline(s2,MAX);
	bool kt = myStrcat(s1, s2);
}

int myStrlen(char s[])
{
     int dem=0;
    while (s[dem]!='\0')
        dem++;
    return dem;
}

bool myStrcat(char s1[], char s2[])
{

   int a=myStrlen(s1)+myStrlen(s2);
    if (a+1>250) {
            cout<< "Khong noi duoc. Khong du bo nho.";
            return 0;}
    else
    {
        for (int i = 0 ; i <myStrlen(s1); i++)
            cout<<s1[i];
            if (myStrlen(s1)!=0 and myStrlen(s2)!=0) cout<<" ";
        for (int j = 0 ; j<myStrlen(s2);j++)
            cout<<s2[j];
        
        return 1;


    }

}