#include <iostream>
using namespace std;

int main() {
    int n=6;

    //Total lines
    for(int i=0; i<n; i++){

        //Total Spaces in one line
        for(int j=0; j<n-1-i; j++)
        cout << " ";

        //Total Chracters in one set
        for(int j=1; j<=i+1; j++)
        cout << j;

        //Total Chracter in second set
        for(int j=i; j>=1; j--)
        cout << j;

        cout<<endl;

    }
    return 0;
}