#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, tmp, Cnt1 = 0, Cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> tmp;
            if (tmp == 1)
                Cnt1++;
        }
        if (Cnt1 == 2 || Cnt1 == 3)
            Cnt++;
        Cnt1 = 0;
    }
    cout << Cnt;
}