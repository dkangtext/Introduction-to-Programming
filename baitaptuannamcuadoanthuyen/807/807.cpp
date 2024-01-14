
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}

int myStrlen(char s[], int k)
{
    int dem=0;
    while (s[dem]!='\0')
        dem++;
    return dem;
}
int myStrcmp(char s1[], char s2[])
{
    return myStrlen(s1,300);
}
void StringReverse(char st[])
{
    int dem=0;
    int vitritrai;
    int vitriphai=myStrlen(st,300);
    char s[300];
    for (int i = 0 ; i <myStrlen(st,300);i++)
        s[i]=st[i];
    for (int i = myStrlen(st,300)-1 ; i >=0;i--)
    {
        if (s[i]==' ') {
            vitritrai=i+1;
            for (int j = vitritrai; j<vitriphai;j++)
            {
                st[dem]=s[j];
                dem++;
            }
            st[dem]=' ';
            dem++;
            vitriphai=i;

        }
        if (i==0)
        {
            vitritrai=i;
            for (int j = vitritrai; j<vitriphai;j++)
            {
                st[dem]=s[j];
                dem++;
            }

        }
    }


}