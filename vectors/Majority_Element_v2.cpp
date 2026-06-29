#include <iostream>
#include <vector>
using namespace std;

//By Brute Force Approach
int major(vector<int> nums)   //O(n2)
{
    int n=nums.size();
    for(int val: nums)
    {
        int freq=0;
        for(int elm: nums)
        {
            if(elm==val)
            freq++;
        }
        if(freq>n/2)
        {
            return val;
        }     
    }
    return -1;
}

int main() {
    vector<int> vec={2,2,1,1,1,2,2};
    cout << major(vec) << endl;
    return 0;
}