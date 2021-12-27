#include <iostream>
#include <vector>
using namespace std;
void Run()
{
    vector<int> Checker(1e6 + 1, 0);
    vector<int> Arr;
    int n, tmp, Cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        Arr.push_back(tmp);
        Checker.at(tmp)++;
    }
    for (int i = 0; i < n; i++)
    {
        if (Checker.at(Arr.at(i)) > 1)
        {
            Cnt += Checker.at(Arr.at(i));
            Checker.at(Arr.at(i)) = 0;
        }
    }
    cout << Cnt << endl;
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