#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int m;
    int s;
    cin >> m >> s;
    if (m == 1 && s == 0)
    {
        cout << 0 << " " << 0;
        return 0;
    }
    if (s == 0 || s > 9 * m)
    {
        cout << -1 << " " << -1;
        return 0;
    }
    vector<int> Max(m);
    vector<int> Min(m);
    //find Max
    for (int i = 0; i < m; i++)
    {
        if (s >= 10)
        {
            Max.at(i) = 9;
            s -= 9;
        }
        else
        {
            Max.at(i) = s;
            s = 0;
        }
    }
    //find Min
    //th1:Min = nghich dao cua Max (neu tan cung cua Max != 0)
    for (long long i = 0; i < m; i++)
    {
        Min.at(i) = Max.at(i);
    }
    //th2: Tan cung cua Max == 0
    if (Min.at(m - 1) == 0)
    {
        Min.at(m - 1) = 1;
        for (long long i = m - 2; i >= 0; i--)
        {
            if (Min.at(i) != 0)
            {
                Min.at(i) -= 1;
                break;
            }
        }
    }
    for (long long i = m - 1; i >= 0; i--)
        cout << Min.at(i);
    cout << " ";
    for (long long i = 0; i < m; i++)
        cout << Max.at(i);
} 