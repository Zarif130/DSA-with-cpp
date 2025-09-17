#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n=4;
    char ch='A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<ch<<" ";

        }
        cout<<endl;
        ch+=1;
    }
    
    return 0;
}