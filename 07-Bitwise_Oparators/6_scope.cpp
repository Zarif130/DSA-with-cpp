#include <bits/stdc++.h>
using namespace std;

int a = 5;//global scope !
void fun()
{
    cout << a << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    if (3 > 1)
    {
        int x = 10; // local scope !
    }
    // cout << x;

    // akhane x if condition er baire tai x valide nah atake e local scope bole!

    fun();
    cout << a;
    return 0;
}