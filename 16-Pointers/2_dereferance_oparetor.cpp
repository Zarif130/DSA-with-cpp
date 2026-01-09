#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int a=20;
    int* ptr=&a;
    cout<<*(&a)<<endl;//....derefarance...!
    cout<<*(ptr)<<endl;//..adress a j value stor..!
    return 0;
}