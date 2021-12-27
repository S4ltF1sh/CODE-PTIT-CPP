//CỬA SỔ TRƯỢT
#include <iostream>
#include <vector>
using namespace std;
long long B[12][12], Res[102][102];
int main()
{
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> Res[i][j];
    cin >> m;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= m; j++)
            cin >> B[i][j];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int tmp1 = i % m, tmp2 = j % m;
            if (tmp1 == 0)
                tmp1 = m;
            if (tmp2 == 0)
                tmp2 = m;
            Res[i][j] *= B[tmp1][tmp2];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << Res[i][j] << " ";
        }
        cout << endl;
    }
}