#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> element);
int majorityElement(vector<int> element)
{
    //brute force approch!
    int n = element.size();
    for (int value : element)
    {
        int freq = 0;
        for (int el : element)
        {
            if (el == value)
            {
               freq++;
            }
        }

        if (freq > n / 2)
        {
            return value;
        }
    }
    return -1;
}
int main()
{

    // brute force approch!
    vector<int> element = {2, 1, 2, 1, 1};
    int ans = majorityElement(element);
    cout << ans;
    return 0;
}