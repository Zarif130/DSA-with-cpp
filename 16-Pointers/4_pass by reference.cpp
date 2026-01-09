#include <bits/stdc++.h>
using namespace std;
void changeA(int a)
{ // pass by value..!
    a = 20;
}
void changeB(int *b)
{ // pass by refarence...!
    *b = 10;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a = 10;
    int b = 5;
    changeA(a);
    cout << a << endl;
    changeB(&b);
    cout << b << endl;
    return 0;
}