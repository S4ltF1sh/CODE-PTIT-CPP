#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void Run()
{
    int n, m, tmp;
    cin >> n >> m;
    vector<int> CheckI(n, 0);
    vector<int> CheckJ(m, 0);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            if (tmp == 1)
            {
                CheckJ.at(j) = 1;
                CheckI.at(i) = 1;
            }
        }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (CheckJ.at(j) == 1 || CheckI.at(i) == 1)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
}