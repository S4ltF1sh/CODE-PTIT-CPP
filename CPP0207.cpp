//QUAY VÒNG DÃY SỐ 1
#include <iostream>
using namespace std;
void Run()
{
    int n, d;
    cin >> n >> d;
    int Arr[n + 1];
    for (int i = 0; i < n; i++)
        cin >> Arr[i];
    for (int i = d; i < n; i++)
        cout << Arr[i] << " ";
    for (int i = 0; i < d; i++)
        cout << Arr[i] << " ";
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