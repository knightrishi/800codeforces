#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt2 = 0, cnt = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
            {
                cnt2++;
            }
            else
            {
                cnt++;
            }
        }
        if (cnt2 % 2 == 0)
        {
            cout << 2 << endl;
        }
        else if (cnt2 % 2 != 0)
        {
            cout << "-1 \n";
        }
        else
        {
            cout <<"1"  << endl;
        }
    }
}