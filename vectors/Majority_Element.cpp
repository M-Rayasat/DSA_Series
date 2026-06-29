#include <iostream>
#include <vector>
using namespace std;

//By Brute Force Approach
int major(vector<int> nums){ //O(n2)
    int n=nums.size();
    int lfrq=0;
    int num;
    for(int i=0; i<n; i++){
        int freq=1;
        for(int j=i+1; j<n; j++){
            if(nums.at(i)==nums.at(j))
            freq++;
        }
        if(freq>lfrq){
            num=nums.at(i);
            lfrq=freq;
        }
    }
    return num;
}

int main() {
    vector<int> vec={2,2,1,1,1,2,2};
    cout << major(vec) << endl;
    return 0;
}