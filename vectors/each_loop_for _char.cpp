#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // vector is like an array !
    
    cout << "for vec2 " << endl;
    vector<char> vec={'a','b','c','d','e'};
    //this is the for each loop !
    for(char value : vec){
        cout<<value<<endl;
    }

    return 0;
}