#include <iostream>
#include <vector>
using namespace std;

int maxsum(vector<int> nums){
    int max_sum=INT_MIN;
    int cur_sum=0;
    
    for(int val: nums){
        cur_sum+=val;
        max_sum=max(cur_sum, max_sum);
        if(cur_sum<0)
        cur_sum=0;
    }
    return max_sum;
}

int main() {
    vector<int> vect={-2,5,-6,3,2,5,-6,5};
    cout << "Maximum Sum of Array: " << maxsum(vect) << endl;
    return 0;
}