#include <bits/stdc++.h>
using namespace std;
void chang(int &b)
{ // pass by refarence by using alias here &=alias.....!
    b = 20;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a = 10;
    chang(a);
    cout << a << endl;
    return 0;
}