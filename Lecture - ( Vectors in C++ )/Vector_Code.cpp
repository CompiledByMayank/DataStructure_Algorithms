#include<iostream>

//We need to include this header file because implementation of vector is already done in STL , so for that we need to use this header file
#include<vector>
using namespace std;
int main()
{
    //Declaration of vector
    //First Way
    vector<int> vec ;

    //Second Way
    vector<int> secondvec = {3,12,3} ;

    //Third Way
    vector<int> thirdvec{33,10,28,129} ;

    //To Access vectors values
    cout << secondvec[0] << endl;
    cout << secondvec[1] << endl;

    cout << endl;

    cout << "Accessing through foreach loop" << endl;
    for (auto v : secondvec)
    {
        cout << v << endl;
    }

    cout << "Size of vector : " << secondvec.size() << endl;

    //To push element at the end and elements get add in same order
    vec.push_back(100);

    //To delete something from end
    vec.pop_back();

    //To print element from starting
    vec.front();

    //To access last element
    vec.back();

    //To access element from specific position :- at()
    vec.at(0);


}