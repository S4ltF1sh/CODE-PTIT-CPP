//TỔNG LỚN NHẤT CỦA DÃY CON KHÔNG KỀ NHAU
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
        
        cout << Res << "\n";
    }
}