//ĐIỂM CÂN BẰNG
#include <iostream>
#include <vector>
using namespace std;
void Run()
{
    int n;
    long long tmp;
    vector<long long> CongDon(1e6 + 1, 0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        CongDon.at(i) = CongDon.at(i - 1) + tmp;
    }
    for (int i = 2; i < n; i++)
    {
        if (CongDon[i - 1] - CongDon[0] == CongDon[n] - CongDon[i])
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
}