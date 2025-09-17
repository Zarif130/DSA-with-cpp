#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int numbers[5]={49,84,803,77,65};
    //INT_MIN  er mane holo -infinity
    int largest =INT_MIN ;
    int index=0;
    for (int i = 0; i < 5; i++)
    {
        if (largest<numbers[i])
        {
            largest=numbers[i];
            index++;
        }
    }
    
    cout<<"so the largest index = "<<index;
    
    

    return 0;
}