#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n=4,num=1;
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    
    return 0;
}