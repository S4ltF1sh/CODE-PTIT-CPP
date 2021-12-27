#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, Max = -1, Min = 1e6 + 1, tmp, Res = 0;
        vector<bool> Checker(1e6 + 5, false);
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            Checker.at(tmp) = true;
            if (tmp > Max)
                Max = tmp;
            if (tmp < Min)
                Min = tmp;
        }
        for (int i = Min; i <= Max; i++)
        {
            if (Checker.at(i) == false)
                Res++;
        }
        cout << Res;
        cout << endl;
    }
}