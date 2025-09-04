#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 8;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        int num = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << num;
            num++;
        }

        for (int j = i; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}