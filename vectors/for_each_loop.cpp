#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // vector is like an array !
    
    cout << "for vec2 " << endl;
    vector<int> vec(5, 0);
    //this is the for each loop !
    for(int i : vec){
        cout<<i<<endl;
    }

    return 0;
}