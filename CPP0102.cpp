#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run(char a)
{
    if (a >= 'a' && a <= 'z')
        a -= 32;
    else
        a += 32;
    cout << a << endl;
}
int main()
{
    int t;
    char a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        Run(a);
    }
}