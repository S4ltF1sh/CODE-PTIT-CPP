//sinh hoan vi nguoc lien ke:
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Run()
{
    int n, tmp;
    vector<int> Hoanvi;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        Hoanvi.push_back(tmp);
    }
    prev_permutation(Hoanvi.begin(), Hoanvi.end());
    for (int i = 0; i < n; i++)
        cout << Hoanvi[i] << " ";
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