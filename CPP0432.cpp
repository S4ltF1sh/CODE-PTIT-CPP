#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool cmp(string a, string b) { return a + b > b + a; }
void Run()
{
    int n;
    cin >> n;
    vector<string> Arr(n);
    for (int i = 0; i < n; i++)
        cin >> Arr.at(i);
    sort(Arr.begin(), Arr.end(), cmp);
    for (int i = 0; i < n; i++)
        cout << Arr.at(i);
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
} 