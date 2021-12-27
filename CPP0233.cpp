//MA TRẬN XOẮN ỐC - 2
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> Res;
        int a[101][101];
        int hang, cot, n, m, Min, Run = 0, tmp;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        hang = n - 1;
        cot = m - 1;
        Min = 0;
        while (1)
        {
            for (int i = Min; i <= cot; i++)
            {
                Res.push_back(a[Min][i]);
                Run++;
            }
            if (Run == n * m)
                break;
            for (int i = Min + 1; i <= hang; i++)
            {
                Res.push_back(a[i][cot]);
                Run++;
            }
            if (Run == n * m)
                break;
            for (int i = cot - 1; i >= Min; i--)
            {
                Res.push_back(a[hang][i]);
                Run++;
            }
            if (Run == n * m)
                break;
            for (int i = hang - 1; i > Min; i--)
            {
                Res.push_back(a[i][Min]);
                Run++;
            }
            if (Run == n * m)
                break;
            Min++;
            hang--;
            cot--;
        }
        for (int i = Res.size() - 1; i >= 0; i--)
        {
            cout << Res[i] << " ";
        }
        cout << endl;
    }
}