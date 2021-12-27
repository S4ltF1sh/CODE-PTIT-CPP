//TÍCH CHẬP
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void Run()
{
    long long Data[305][305], KeNl[3][3], Res[305][305];
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> Data[i][j];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> KeNl[i][j];

    for (int i = 1; i < n - 1; i++)
        for (int j = 1; j < m - 1; j++)
            for (int k = i - 1; k <= i + 1; k++)
                for (int l = j - 1; l <= j + 1; l++)
                    Res[i][j] += Data[k][l] * KeNl[k - i + 1][l - j + 1];
    long long Sum = 0;
    for (int i = 1; i < n - 1; i++)
        for (int j = 1; j < m - 1; j++)
            Sum += Res[i][j];
    cout << Sum << "\n";
}
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
}