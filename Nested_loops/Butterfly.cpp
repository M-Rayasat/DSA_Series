#include <iostream>
using namespace std;

int main() {
    int n=4;

    //First Half
    for(int i=0; i<n; i++){

        //Asterik
        for(int j=0; j<i+1; j++){
            cout << "*";

        }

        //Spaces
        for(int j=0; j<(n-i-1)*2; j++){
            cout << " ";

        }

        //Asterik
        for(int j=0; j<(i+1); j++){
            cout << "*";
        }

        cout << endl;
    }

    //Second Half
    for(int i=0; i<n; i++){
        
        //Asterik
        for(int j=0; j<n-i; j++){
            cout << "*";
        }

        //Spaces
        for(int j=0; j<2*i; j++){
            cout << " ";
        }

        //Asterik
        for(int j=0; j<n-i; j++){
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}