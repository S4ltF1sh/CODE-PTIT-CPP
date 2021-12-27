#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
string M101 = "ABBADCCABDCCABD", M102 = "ACCABCDDBBCDDBB";
void Run(int n)
{
    char tmp;
    int Correct = 0;
    if (n == 101)
    {
        for (int i = 0; i < 15; i++)
        {
            cin >> tmp;
            if (tmp == M101.at(i))
                Correct++;
        }
    }
    else
    {
        for (int i = 0; i < 15; i++)
        {
            cin >> tmp;
            if (tmp == M102.at(i))
                Correct++;
        }
    }
    cout << setprecision(2) << fixed << Correct * 1.0 * (10.0 / 15.0) << endl;
}
int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Run(n);
    }
}