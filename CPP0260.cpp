//MA TRẬN XOẮN ỐC - 4
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a[22][22];
    vector<int> Res;
    int hang, cot, n, Min, Run = 0, tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> tmp;
            Res.push_back(tmp);
        }
    }
    sort(Res.begin(), Res.end());
    hang = n - 1;
    cot = n - 1;
    Min = 0;
    while (1)
    {
        for (int i = Min; i <= cot; i++)
        {
            a[Min][i] = Res[Run];
            Run++;
        }
        if (Run == n * n)
            break;
        for (int i = Min + 1; i <= hang; i++)
        {
            a[i][cot] = Res[Run];
            Run++;
        }
        if (Run == n * n)
            break;
        for (int i = cot - 1; i >= Min; i--)
        {
            a[hang][i] = Res[Run];
            Run++;
        }
        if (Run == n * n)
            break;
        for (int i = hang - 1; i > Min; i--)
        {
            a[i][Min] = Res[Run];
            Run++;
        }
        if (Run == n * n)
            break;
        Min++;
        hang--;
        cot--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}