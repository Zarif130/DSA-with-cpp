#include <bits/stdc++.h>
using namespace std;
int dectobinary(int decnum);
int dectobinary(int decnum)
{
    int ans = 0, pow = 1;
    while (decnum > 0)
    {
        int remainder = decnum % 2;
        decnum /= 2;
        ans += (remainder * pow);
        pow *= 10;
    }
    return ans; // binary form of a number..........!
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int decnum ;
    cin>>decnum;
    cout << dectobinary(decnum)<<endl;
    for (int i = 1; i <=10; i++)
    {
        cout<<dectobinary(i)<<endl;
    }
    
    return 0;
}