//BIẾN ĐỔI MA TRẬN
//https://www.geeksforgeeks.org/minimum-operations-required-make-row-column-matrix-equals/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int Matrix[n][n], sumRow[n] = {0}, sumCol[n] = {0}, sumMax = 0, Res = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> Matrix[i][j];
                sumRow[i] += Matrix[i][j];
                sumCol[j] += Matrix[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            sumMax = max(sumMax, max(sumRow[i], sumCol[i]));
        }
        for (int i = 0, j = 0; i < n && j < n;)
        {
            int tmp = min(sumMax - sumRow[i], sumMax - sumCol[j]);
            Matrix[i][j] += tmp;
            sumRow[i] += tmp;
            sumCol[j] += tmp;
            Res += tmp;
            if (sumRow[i] == sumMax)
                i++;
            if (sumCol[j] == sumMax)
                j++;
        }
        cout << Res << endl;
    }
}