#include <bits/stdc++.h>
using namespace std;
vector<int> pairsum(vector<int> num, int target, int n);
vector<int> pairsum(vector<int> num, int target, int n)
{

    vector<int> ans;

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int pairs = num[i] + num[j];
        if (pairs > target)
        {
            j--;
        }
        else if (pairs < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // if the array is sorted!
    // we should use 2 pointer approach!
    vector<int> numbers = {1,2,3,4,5,12, 13,};
    int n = numbers.size();
    int target = 15;
    vector<int> thepair = pairsum(numbers, target, n);
    cout << thepair[0] << " " << thepair[1] << endl;

    return 0;
}