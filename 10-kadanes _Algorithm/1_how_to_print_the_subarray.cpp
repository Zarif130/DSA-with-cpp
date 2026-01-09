#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // total subarray= n(n+1)/2;

    // TO find the subarray!

    int n = 5;
    int array[n] = {1, 2, 3, 4, 5};
    // for starting point of the subarray!
    for (int start = 0; start < n; start++)
    {
        // for the end point of the subarray !
        for (int end = start; end < n; end++)
        {
            // for printing the starting to end!
            for (int i = start; i <= end; i++)
            {
                cout << array[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}