#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int numbers[5]={49,84,83,77,65};
    //INT_MAX  er mane holo + infinity
    int smallest = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (smallest>numbers[i])
        {
            smallest=numbers[i];
        }
        
    }
    cout<<"so the smallest value = "<<smallest;
    
    

    return 0;
}