#include <iostream>
#include <vector>
using namespace std;
int main()
{

   
    vector<char> vec={'a','b','c','d','e'};

//size of the vectors........!
cout<<"size = "<<vec.size()<<endl;

    //this is the for each loop !
    for(char value : vec){
        cout<<value<<endl;
    }

    return 0;
}