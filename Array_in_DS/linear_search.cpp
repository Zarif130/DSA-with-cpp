#include <bits/stdc++.h>
using namespace std;
int theSearch(int arr[], int size, int terget)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == terget)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {1, 4, 5, 6, 8, 3, 6, 0};
    int size = sizeof(arr) / sizeof(int);
    int terget = 3;
    int a = theSearch(arr, size, terget);
    cout << a << endl;

    return 0;
}
