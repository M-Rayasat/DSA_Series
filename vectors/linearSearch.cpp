#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> vec){
    int ans=0;
    for(int val: vec){
        ans^=val;
    }
    return ans;
}

int main() {
    vector<int> v1={4,2,1,1,2};
    vector<int> v2={1,2,1};
    vector<int> v3={3,4,4,6,3};

    cout << "Unique in Linear Search of v1: " << search(v1) << endl;
    cout << "Unique in Linear Search of v2: " << search(v2) << endl;
    cout << "Unique in Linear Search of v3: " << search(v3) << endl;
    
    return 0;
}