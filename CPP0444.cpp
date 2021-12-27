#include <iostream>
using namespace std;
void Run()
{
    int n, x, tmp, Res;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp == x)
            Res = i + 1;
    }
    cout << Res << endl;
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