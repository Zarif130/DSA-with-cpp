#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int numbers[5] = {9, 80, 89, 90, 60};
    // INT_MIN  er mane holo -infinity
    int largest = INT_MIN;
    int index;

    for (int i = 0; i < 5; i++)
    {
        if (largest < numbers[i])
        {
            largest = numbers[i];
            index = i;
        }
    }

    cout << "so the largest index = " << index;

    return 0;
}