#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    // Using for_each loop to print vector elements
    cout << "Vector elements are: ";
    for(int value : vec) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}