#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    string s;
    int t = 1;
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
                s[i] = '\0';
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '\0')
                cout << "." << s[i];
        }
    }
}