//TÍNH TỔNG TRONG KHOẢNG
#include <iostream>
#include <vector>
using namespace std;
void Run()
{
    int n, q, L, R;
    long long tmp;
    vector<long long> Checker(1e6 + 1, 0);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        Checker.at(i) = Checker.at(i - 1) + tmp;
    }
    for (int i = 0; i < q; i++)
    {
        cin >> L >> R;
        cout << Checker.at(R) - Checker.at(L - 1)<< endl;
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