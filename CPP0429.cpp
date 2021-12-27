//SỬA ĐÈN
#include <iostream>
#include <vector>
#include <deque>
#include <map>
using namespace std;
void Run()
{
    int n, k, b, tmp, Res = 1e6 + 2;
    cin >> n >> k >> b;
    vector<int> isLight(n + 1, 1);
    vector<int> CongDon(n + 1, 0);
    for (int i = 1; i <= b; i++)
    {
        cin >> tmp;
        isLight[tmp] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        CongDon[i] = isLight[i];
        CongDon[i] += CongDon[i - 1];
    }
    for (int i = 1; i <= n - k + 1; i++)
    {
        int tmp = CongDon[i + k - 1] - CongDon[i - 1];
        if (k - tmp < Res)
            Res = k - tmp;
    }
    cout << Res << "\n";
}
int main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        Run();
}