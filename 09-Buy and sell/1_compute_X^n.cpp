#include <bits/stdc++.h>
using namespace std;
int main()
{
       ios_base::sync_with_stdio(false);
       cin.tie(nullptr);
       // bainary exponentiation!
       long long power = 5;
       long long number = 38;
       long long binaryform = power;
       long long ans = 1;
       if (power == 0)
       {
              return 1.0;
       }
       if (number == 0)
       {
              return 0;
       }
       if (number == 1)
       {
              return 1.0;
       }

       while (binaryform > 0)
       {
              if (binaryform % 2 == 1)
              {
                     ans *= number;
              }
              number *= number;
              binaryform /= 2;
       }
       cout << ans;

       return 0;
}