#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int array[] = {3, 4, 5, 6, 7,5,5,45,64};
    int size = sizeof(array) / sizeof(int);
    int first_index = 0;
    int last_index = size - 1;
    while (first_index < last_index)
    {
        swap(array[first_index], array[last_index]);
        first_index++;
        last_index--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}