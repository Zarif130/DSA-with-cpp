#include <bits/stdc++.h>
using namespace std;
class Teacher
{
public:
    Teacher()
    {
        cout << "hi i am constructor";
        //it dose not have return type.
        //only called once(automatically) at object creation;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    /* CONSTRUCTOR: special method invoked automatically at time of
       object creation . used for initialisation */

       Teacher t1;//constructor call
       Teacher t2; //constructor call
      
       //Auto call
    return 0;
}