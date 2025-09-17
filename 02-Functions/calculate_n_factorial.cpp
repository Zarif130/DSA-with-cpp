#include <bits/stdc++.h>
using namespace std;
int factorial(int a);
int factorial(int a)
{

    int facto = 1;
    for (int i = 1; i <= a; i++)
    {
        facto *= i;
    }
    return facto;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int p;
    cin >> p;
    cout << factorial(p) << endl;

    return 0;
}