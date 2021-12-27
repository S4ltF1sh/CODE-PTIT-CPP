#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Run()
{
    int n;
    cin >> n;
    vector<int> Arr1(n);
    vector<int> Arr2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Arr1[i];
        Arr2[i] = Arr1[i];
    }
    sort(Arr2.begin(), Arr2.end());
    int i = 0, j = n - 1;
    while (i < j && Arr1[i] == Arr2[i])
        i++;
    while (i < j && Arr1[j] == Arr2[j])
        j--;
    if (i == n - 1)
        cout << 1 << " " << n << endl;
    else
        cout << i + 1 << " " << j + 1 << endl;
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