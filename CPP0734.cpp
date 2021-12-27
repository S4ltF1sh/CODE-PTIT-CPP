//HÌNH CHỮ NHẬT LỚN NHẤT - 2
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void Run()
{
    long long S = 0;
    vector<int> Arr(505, 0);
    int tmp;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> tmp;
            if (tmp == 1)
                Arr[j]++;
            else
                Arr[j] = 0;
        }
        stack<int> LCheck;
        vector<int> LInd(m + 2, 0);
        LCheck.push(0);
        for (int i = 1; i <= m; i++)
        {
            while (!LCheck.empty() && Arr.at(LCheck.top()) >= Arr.at(i))
                LCheck.pop();
            if (!LCheck.empty())
                LInd.at(i) = LCheck.top();
            LCheck.push(i);
        }

        stack<int> RCheck;
        vector<int> RInd(m + 2, 0);
        RCheck.push(m + 1);
        for (int i = m; i >= 1; i--)
        {
            while (!RCheck.empty() && Arr.at(RCheck.top()) >= Arr.at(i))
                RCheck.pop();
            if (!RCheck.empty())
                RInd.at(i) = RCheck.top();
            RCheck.push(i);
        }
        // for (int i = 1; i <= m; i++)
        //     cout << Arr[i] << " ";
        // cout << endl;
        for (int i = 1; i <= m; i++)
        {
            if ((RInd[i] - LInd[i] - 1) * Arr[i] > S)
                S = (RInd[i] - LInd[i] - 1) * Arr[i];
        }
    }
    cout << S << endl;
}
int main()
{
    int t;
    cin >>t;
    while (t--)
        Run();
}