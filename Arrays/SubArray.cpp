#include <iostream>
using namespace std;

int main() {
    int n=6;
    int arr[n]={6,5,4,3,2,1};

    //SubArrays of given array
        for(int st=0; st<n; st++){
            for(int ed=st; ed<n; ed++){
                for(int i=st; i<=ed; i++){
                    cout << arr[i];
                }
                cout << " ";
            }
            cout << endl;
        }



    return 0;
}