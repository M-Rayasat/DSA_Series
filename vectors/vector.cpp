#include <iostream>
#include <vector>
using namespace std;

int main() {
    //syntax of vector declaratoin
    vector <int> vec; //size =0

    // Print vector size
    cout <<"Before pushing any val: "<< vec.size() << endl;

    //Adding vector elements
    vec.push_back(50);
    vec.push_back(89);
    vec.push_back(62);
    
    cout << "Size after pushing val: " << vec.size() << endl;

    //Capacity of Vector: it increase by x2 after full allocation of size
    cout << "Capacity of vector: "<< vec.capacity()<< endl;


    //Printing values of vector
    for(int i=0; i<vec.size(); i++)
        cout << "Value at index: " << i << " is: " << vec.at(i) << endl; 

    //Deleting vector elements
    vec.pop_back();
    cout << "Size after popping val: " << vec.size() << endl;

    //front and back function for first and last value of vector
    cout << "Front value of Vector is: " << vec.front() << endl;
    cout << "Last value of vector is: " << vec.back() << endl;
    return 0;
}