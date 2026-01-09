#include <bits/stdc++.h>
using namespace std;
int find_the_target_index(int arr[], int size, int terget)
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
    int a = find_the_target_index(arr, size, terget);
    cout << a << endl;

    return 0;
}
