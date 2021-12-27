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
        int n, m;
        long long tmp;
        vector<long long> Arr;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            Arr.push_back(tmp);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> tmp;
            Arr.push_back(tmp);
        }
        sort(Arr.begin(), Arr.end());
        for (int i = 0; i < m + n; i++)
            cout << Arr.at(i) << " ";
        cout << endl;
    }
}