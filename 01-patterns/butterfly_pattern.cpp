#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 4;
    // for top part....!
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < n + 2 - (2 * i); j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i + 1; j++)
        {

            cout << "* ";
        }

        cout << endl;
    }
    // for bottom part!
    for (int i = 0; i < n; i++)
    {
        // for pattern...!
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        // for space.........!
        if (i != 0)
        {
            for (int j = 0; j < i * 2; j++)
            {
                cout << "  ";
            }
        }
        // for pattern.........!
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}