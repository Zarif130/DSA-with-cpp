#include <bits/stdc++.h>
using namespace std;
int bainaryTOdacimal(int baiNum);
int bainaryTOdacimal(int baiNum){
int ans=0;//to store the decimal result
int pow=1;//represents the current power of 2
    while (baiNum>0)
    {
        int remainder = baiNum%10;//Extract the rightmost digit of the binary number .
        ans+=remainder*pow;
        baiNum/=10;
        pow*=2;
    }
    
    return ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int baiNum;
    cin>>baiNum;
    cout<< bainaryTOdacimal(baiNum);

    return 0;
}

