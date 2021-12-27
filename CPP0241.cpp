//BIẾN ĐỔI DÃY SỐ

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, tmp, Res = 0;
        vector<int> Arr;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            Arr.push_back(tmp);
        }
        int i = 0, j = n - 1;
        while (i <= j)
        {
            if (Arr[i] > Arr[j])
            {
                j--;
                Arr[j] += Arr[j + 1];
                Res++;
            }
            else if (Arr[i] < Arr[j])
            {
                i++;
                Arr[i] += Arr[i - 1];
                Res++;
            }
            else
            {
                i++;
                j--;
            }
        }
        cout << Res << "\n";
    }
}