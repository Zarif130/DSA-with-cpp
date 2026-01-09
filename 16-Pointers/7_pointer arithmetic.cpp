#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    //increment or decrement
    int a=10;
    int* ptr =&a;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;// +4 according to the data type..!
    ptr=ptr+2;// 2 int mane 8 bits add hobe
    cout<<ptr<<endl;

    return 0;
}