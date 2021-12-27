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
        int n, tmp;
        cin >> n;
        vector<int> Arr;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            Arr.push_back(tmp);
        }
        sort(Arr.begin(), Arr.end());
        for (int i = 0; i < n; i++)
            cout << Arr.at(i) << " ";
        cout << endl;
    }
}