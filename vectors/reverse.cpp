#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &v){
    for(int i=0; i<v.size()-i-1; i++){
        swap(v.at(i) ,v.at(v.size()-i-1));
    }
    cout << "Successfully Reversed" << endl;
}

int main() {
    vector<int> vect={67,90,46,05,24,13,4,24,2,45,13};
    reverse(vect);

    for(int val: vect)
    cout<<val<< " ";
    return 0;
}