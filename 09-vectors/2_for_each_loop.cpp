#include <iostream>
#include <vector>
using namespace std;
int main()
{

   //each loop is a range-based for loop
   /*You should use a range-based for loop when you want to iterate 
   through every element of a container from beginning to end without needing 
   to know or use the element's index.*/

    cout << "for vec " << endl;
    vector<int> vec(5, 7);// size এবং initial value specify করার একটি way।
    
    // this is called the for each loop !
    for (int i : vec)
    {
        cout << i <<" ";
    }
        cout<<endl;

    vector<int>zarif{1,2,3,4,5,};
    for (int i : zarif)
    {
        cout << i << endl;
    }

    return 0;
}