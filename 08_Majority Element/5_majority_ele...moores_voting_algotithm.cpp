#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // Moore's voting algorithm!
    vector<int> num = {2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2};

    int n = num.size();

    int freq = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = num[i];
        }
        if (ans == num[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    cout << ans;

    return 0;
}