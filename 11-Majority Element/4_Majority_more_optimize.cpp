#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> num = {2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2};

    int n = num.size();
    // sort the vector!
    sort(num.begin(), num.end());
    // for freequence count;
    int frequency = 1;
    int ans = num[0];
    for (int i = 1; i < n; i++)
    {
        if (num[i] == num[i-1])
        {
            frequency++;
        }
        else
        {
            frequency = 1;
            ans = num[i];
        }
        if (frequency > n / 2)
        {
            cout<<ans;
            return 0;
        }
    }
    cout<<"no majority element heare!";
                
    return 0;
}