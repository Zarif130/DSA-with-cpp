#include <bits/stdc++.h>
using namespace std;
vector<int> pairsum(vector<int> num, int target);
vector<int> pairsum(vector<int> num, int target)
{
    vector<int> answer;
    int n = num.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] + num[j] == target)
            {
                answer.push_back(i);
                answer.push_back(j);
                return answer;
            }
        }
    }
    return answer;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //brute force aproches!
    vector<int> num = {1, 2, 3, 4, 5, 6};

    int target = 8;

    vector<int> ans = pairsum(num, target);

    // cout << ans[0] << " " << ans[1] << endl;

    for(int value:ans){
        cout<<value<<" ";
    }

    return 0;
}