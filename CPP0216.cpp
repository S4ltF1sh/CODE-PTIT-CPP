//DÃY MOUNTAIN
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int Arr[n];
        for (int i = 0; i < n; i++)
            cin >> Arr[i];
        int l, r, Check = -1;
        cin >> l >> r;
        for (int i = l; i < r; i++)
        {
            if (Arr[i] > Arr[i + 1])
            {
                Check = i;
                break;
            }
        }
        if (Check != -1)
        {
            for (int i = Check; i < r; i++)
            {
                if (Arr[i] < Arr[i + 1])
                {
                    Check = -2;
                    break;
                }
            }
        }
        if (Check == -2)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}