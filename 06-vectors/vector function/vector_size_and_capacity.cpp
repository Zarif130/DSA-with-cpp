#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    vector<int>vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    
    cout<<vec.size()<<endl;//3
    cout<<vec.capacity()<<endl;//4
    return 0;
}