//SỐ NHỎ HƠN K
#include <iostream>
using namespace std;

int minSwap(int Arr[], int n, int k)
{
    int Cnt = 0;
    for (int i = 0; i < n; ++i)
        if (Arr[i] <= k)
            Cnt++;
    int bad = 0;
    for (int i = 0; i < Cnt; ++i)
        if (Arr[i] > k)
            bad++;

    int Res = bad;
    for (int i = 0, j = Cnt; j < n; i++, j++)
    {
        if (Arr[i] > k)
            bad--;

        if (Arr[j] > k)
            bad++;

        Res = min(Res, bad);
    }
    return Res;
}

void Run()
{
    int n, k;
    cin >> n >> k;
    int Arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    cout << minSwap(Arr, n, k) << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
    return 0;
}