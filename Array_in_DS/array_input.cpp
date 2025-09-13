#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int size = 5;
    int marks[size];

    // for input.....!

    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
        cout << endl;
    }

    // for input print ...!
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}