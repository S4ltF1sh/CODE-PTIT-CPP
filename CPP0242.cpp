//DÃY SỐ NHỊ PHÂN
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Run()
{
    int n;
    cin >> n;
    vector<int> A(n + 5, 0), B(n + 5, 0), Res;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
        A[i] += A[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> B[i];
        B[i] += B[i - 1];
    }
    for (int i = 1; i <= n; i++)
        for (int j = n; j >= i; j--)
            if (A[j] - A[i - 1] == B[j] - B[i - 1])
                Res.push_back(j - i + 1);
    sort(Res.begin(), Res.end());
    if (Res.size() == 0)
        cout << 0 << "\n";
    else
        cout << Res[Res.size() - 1] << "\n";
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