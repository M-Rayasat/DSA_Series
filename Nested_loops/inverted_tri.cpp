#include <iostream>
using namespace std;

int main() {
    int n=4;

    //Number of lines
    for(int i=0; i<n; i++){
        
        //Number of Spaces
        for(int j=0; j<i; j++){
            cout << " ";
        }
        //Number of Digits
        for(int j=0; j<n-i; j++){
            cout << i+1;
        }
        cout<<endl;
    }
    return 0;
}