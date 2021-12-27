//CHIA DƯ
#include <iostream>
using namespace std;
void Run()
{
    int a, m;
    cin >> a >> m;
    for (int i = 0; i < m; i++)
    {
        if (((a % m) * (i % m)) % m == 1)
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
    return 0;
}