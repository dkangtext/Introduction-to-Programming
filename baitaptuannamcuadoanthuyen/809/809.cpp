#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrcmp(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	cin.getline(s1,MAX);
	cin.getline(s2,MAX);
	int kt = myStrcmp(s1, s2);
	cout << kt << endl;
	return 0;
}

int myStrlen(char s[])
{
    int dem=0;
    while (s[dem]!='\0')
        dem++;
    return dem;
}

int myStrcmp(char s1[], char s2[])
{
    int n=myStrlen(s1);
   for (int i = 0 ; i <n;i++)
        if (int(s1[i])!= int(s2[i]))
   {
       if (int(s1[i])>int(s2[i])) return 1;
       if (int(s1[i])<int(s2[i])) return -1;
   }
   if (myStrlen(s2)>n) return -1;
   if (myStrlen(s2)<n) return 1;
   return 0;
}