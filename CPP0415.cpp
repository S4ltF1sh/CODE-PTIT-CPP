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
        int n, m;
        long long tmp, MaxA = -1e8 - 1, MinB = 1e8 + 1;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            if (tmp > MaxA)
                MaxA = tmp;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> tmp;
            if (tmp < MinB)
                MinB = tmp;
        }
        cout << MaxA * MinB;
        cout << endl;
    }
}