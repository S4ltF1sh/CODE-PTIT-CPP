//PHẦN TỬ LỚN NHẤT
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Run()
{
    int n, Max = -1, tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp > Max)
            Max = tmp;
    }
    cout << Max;
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