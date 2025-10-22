#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int a=10;
    cout<<&a<<endl; //it prints the address of the variable .
    int* ptr=&a;
    cout<<ptr<<endl;
    //pointer to pointer
    int** parptr=&ptr;
    cout<<parptr<<endl;
    cout<<&ptr<<endl;

    return 0;
}