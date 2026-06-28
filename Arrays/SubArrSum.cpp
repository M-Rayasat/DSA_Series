#include <iostream>
using namespace std;

int main() {
    int n=8;
    int arr[n]={-2,5,-6,3,2,5,-6,5};
    int max_sum=INT_MIN;

    //SubArray sum by brute Force approach
    for(int st=0; st<n; st++){
        int cur_sum=0;
        for(int end=st; end<n; end++){
            cur_sum+=arr[end];
            max_sum=max(cur_sum, max_sum);
        }

    }
    cout << "Maximum SubArray Sum: "<< max_sum << endl;
    return 0;
}