#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // brute force Approach
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    int max_sum = INT_MIN;

    for (int start = 0; start < n; start++)
    {
        int current_sum = 0;
        for (int end = start; end < n; end++)
        {
            current_sum += arr[end];
            // max function er kaj corrent_sum k return kora, jodi current sum boro hoy na hole max_sum k return korbe!

            max_sum = max(current_sum, max_sum);
        }
    }
    cout << "max subarray sum = " << max_sum;

    return 0;
}