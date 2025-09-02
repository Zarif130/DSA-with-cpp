#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n=6;
    for (int i = 0; i <n; i++)
    {
        for (int j =i+1; j>0; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}