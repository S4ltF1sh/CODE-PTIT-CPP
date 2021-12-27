#include <iostream>
using namespace std;
void Run()
{
    int n, x, tmp, Res = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp == x)
            Res++;
    }
    if (Res == 0)
        Res = -1;
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