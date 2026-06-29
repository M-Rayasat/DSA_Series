#include <iostream>
#include <vector>
using namespace std;

// Moore's Voting algorithm is better then v1
int major(vector<int> nums)   //O(n)
{
    int ans=0;
    int freq=0;
    for(int val: nums){
        if(freq==0)
        ans=val;
        if(ans=val)
        freq++;
        else
        freq--;
    }

    //If majority Element does not exist
    int count=0, n=nums.size();
    for(int val: nums){
        if(val==ans)
        count++;
    }

    if(count>n/2)
    return ans;
    else
    return -1;
}

int main() {
     vector<int> vec={2,2,1,1,1,2,2};
    cout << major(vec) << endl;
    return 0;
}
    