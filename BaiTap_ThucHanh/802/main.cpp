#include <iostream>

using namespace std;

#define MAX 300

void myStrcpy(char s[], int vt, char s1[], int k)
{
    int i = 0;
    if (k == 0)
    {
        while (s1[i] != '\0')
        {
            if (vt + i < MAX)
            {
                s[vt + i] = s1[i];
            }
            else
            {
                break;
            }
            i++;
        }
        s[vt + i] = '\0';
    }
    else
    {
        while (i < k && s1[i] != '\0')
        {
            if (vt + i < MAX)
            {
                s[vt + i] = s1[i];
            }
            else
            {
                break;
            }
            i++;
        }
        s[vt + i] = '\0';
    }
}

void Chuanhoa(char s[])
{
    char result[MAX];
    int j = 0;
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == '.')
        {
            while (j > 0 && result[j - 1] == ' ')
            {
                j--;
            }
            result[j++] = '.';
            result[j++] = ' ';
        }
        else if (s[i] != ' ' || (s[i] == ' ' && (j == 0 || result[j - 1] != ' ')))
        {
            result[j++] = s[i];
        }
    }
    result[j] = '\0';
    myStrcpy(s, 0, result, 0);
}

int main() {
    char s[MAX];
    cin.getline(s, MAX);
    char s1[MAX];
    myStrcpy(s1, 0, s, 0);
    Chuanhoa(s1);
    cout << s << endl << s1 << endl;
    return 0;
}
