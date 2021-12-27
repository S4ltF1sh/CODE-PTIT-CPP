// ĐỒNG DƯ VỚI K
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, Res = 0;
        cin >> n;
        int Arr[n];
        for (int i = 0; i < n; i++)
            cin >> Arr[i];
        sort(Arr, Arr + n);
        for (int i = 1; i <= Arr[n - 1]; i++)
        {
            int d = Arr[0] % i;
            int Cnt = 0;
            for (int j = 1; j < n; j++)
            {
                if (Arr[j] % i == d)
                    Cnt++;
                else
                    break;
            }
            if (Cnt == n - 1)
                Res++;
        }
        if (n == 1)
            cout << 0 << endl;
        else
            cout << Res << endl;
    }
}