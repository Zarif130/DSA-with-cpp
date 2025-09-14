#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // vector is like an array !
    vector<int> vec;
    cout<<"size = "<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(20);
    vec.push_back(40);
    cout<<"after push back the size is = "<<vec.size()<<endl;

    vec.pop_back();

    //this is the for each loop !
    for(int value : vec){
        cout<<value<<endl;
    }

    return 0;
}