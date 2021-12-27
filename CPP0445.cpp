#include <iostream>
using namespace std;
void Run()
{
    int n, Min = 1e7 + 1, seMin = 1e7 + 1, Max = -1;
    cin >> n;
    int Arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
        if (Arr[i] < Min)
            Min = Arr[i];
        if (Arr[i] > Max)
            Max = Arr[i];
    }
    if (Max == Min)
        cout << -1 << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (Arr[i] < seMin && Arr[i] != Min)
                seMin = Arr[i];
        }
        cout << Min << " " << seMin << endl;
    }
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