#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Majority Element by sorted array method
int major(vector<int> nums)   //O(nlogn)
{   int freq=1,n=nums.size();
    int ans=nums.at(0);

    sort(nums.begin(), nums.end());
    
    for(int i=1; i<n; i++ ){
        if(nums.at(i)==nums.at(i-1))
        freq++;
        else
        {
        freq=1;
        ans=nums.at(i);
        }
        if(freq>n/2)
         return ans;
    }
    return ans;
}


int main() {
     vector<int> vec={2,2,1,1,1,2,2};
    cout << major(vec) << endl;
    return 0;
}