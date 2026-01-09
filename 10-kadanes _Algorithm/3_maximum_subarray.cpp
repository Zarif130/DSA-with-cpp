#include <bits/stdc++.h>
using namespace std;
int main()
{

    // with Kadane's Algorithm!

    /*Kadane's Algorithm is an efficient way to find the maximum sum of
   a contiguous subarray within a one-dimensional array of numbers. */
    int n = 6;
    int arry[n] = {3, -4, 5, -1, 7, -8};
    int maxSum = INT_MIN;
    int curretnSum = 0;
    for (int i = 0; i < n; i++)
    {
        curretnSum += arry[i];
        maxSum = max(curretnSum, maxSum);
        if (curretnSum < 0) // ai condition maxSum er pore e dite hobe!
        {
            curretnSum = 0;
        }
    }
    cout << "so the max sum is = " << maxSum << endl;

    return 0;
}