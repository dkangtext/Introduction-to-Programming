#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void StringReverse(char st[]);

int main()
{
    char s[MAX];
    cin.getline(s, MAX);
    if (myStrcmp(s, "") == 0)
        cout << "Chuoi rong." << endl;
    else
    {
        StringReverse(s);
        cout << s << endl;
    }
    return 0;
}

int myStrcmp(char s1[], char s2[])
{
    int length1 = myStrlen(s1, 0);
    int length2 = myStrlen(s2, 0);

    if (length1 == length2)
        return 0;
    else
        return 1;
}

int myStrlen(char s[], int k)
{
    int length = 0;
    while (s[k] != '\0')
    {
        length++;
        k++;
    }
    return length;
}

void reverseWord(char word[], int start, int end)
{
    while (end > start)
    {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
}

void StringReverse(char st[])
{
    int start = 0;
    int end = 0;
    int length = myStrlen(st, 0);
    while (end < length)
    {
        while (end < length && st[end] != ' ')
        {
            end++;
        }
        reverseWord(st, start, end - 1);
        start = end + 1;
        end = start;
    }
}
