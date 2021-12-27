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
        int n, k, tmp, Res = 0;
        cin >> n >> k;
        vector<int> Arr;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            Arr.push_back(tmp);
        }
        sort(Arr.begin(), Arr.end());
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (Arr.at(j) + Arr.at(i) == k)
                    Res++;
        cout << Res << endl;
    }
}