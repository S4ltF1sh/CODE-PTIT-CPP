#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, Cnt = 0;
        cin >> n >> k;
        long long Arr[n];
        for (int i = 0; i < n; i++)
            cin >> Arr[i];
        sort(Arr, Arr + n);
        for (int i = 0; i < n - 1; i++)
        {
            long long itr_index = lower_bound(Arr + i + 1, Arr + n, Arr[i] + k) - (Arr + i + 1);
            if (itr_index != n)
                Cnt += itr_index;
        }
        cout << Cnt << endl;
    }
}