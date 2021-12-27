//SỐ NHỎ NHẤT LỚN HƠN A[i]
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void Run()
{
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        B[i] = A[i];
    }
    sort(B.begin(), B.end());
    for (int i = 0; i < n; i++)
    {
        int Iter = upper_bound(B.begin(), B.end(), A[i]) - B.begin();
        if (Iter < n)
            cout << B[Iter] << " ";
        else
            cout << "_ ";
    }
    cout << endl;
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