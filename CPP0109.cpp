#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
bool Check(int n)
{
    int CntL = 0, CntC = 0;
    while (n > 0)
    {
        if ((n % 10) % 2 == 0)
            CntC++;
        else
            CntL++;
        n /= 10;
    }
    if (CntC != CntL)
        return false;
    return true;
}
int main()
{
    int n, Cnt = 0;
    cin >> n;
    if (n % 2 != 0)
        return 0;
    for (int i = pow(10, n - 1); i < pow(10, n); i++)
    {
        if (Check(i) == true)
        {
            cout << i << " ";
            Cnt++;
            if (Cnt % 10 == 0)
                cout << "\n";
        }
    }
}