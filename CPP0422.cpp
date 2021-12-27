//SỐ 0 Ở CUỐI DÃY
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Run()
{
    long long tmp;
    int n, Cnt = 0;
    cin >> n;
    vector<long long> Arr;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp != 0)
            Arr.push_back(tmp);
        else
            Cnt++;
    }
    for (int i = 0; i < Arr.size(); i++)
        cout << Arr.at(i) << " ";
    while (Cnt--)
        cout << 0 << " ";
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