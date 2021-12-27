//HỢP VÀ GIAO CỦA HAI DÃY SỐ - 2
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int TanSo[100005] = {};
        for (int i = 0; i < n + m; i++)
        {
            int tmp;
            cin >> tmp;
            TanSo[tmp]++;
        }
        for (int i = 0; i < 100001; i++)
            if (TanSo[i] > 0)
                cout << i << " ";
        cout << endl;
        for (int i = 0; i < 100001; i++)
            if (TanSo[i] > 1)
                cout << i << " ";
        cout << endl;
    }
    return 0;
}