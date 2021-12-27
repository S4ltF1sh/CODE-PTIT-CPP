//KHOẢNG CÁCH XA NHẤT
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, j, n;
    int t;
    cin >> t;
    while (t--)
    {
        int Max = -1;
        cin >> n;
        vector<long long> Arr(n);
        for (int i = 0; i < n; i++)
            cin >> Arr[i];
        for (i = 0; i < n - 1; i++)
        {
            for (j = n - 1; j > i; j--)
            {
                if (Arr[j] >= Arr[i])
                {
                    if(Max < (j - i))
                    {
                        Max = j - i;
                    }
                    break;
                }
            }
        }
        cout << Max << "\n";
    }
}