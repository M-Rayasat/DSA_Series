#include <iostream>
using namespace std;

int main() {
    int n=4;

    //First Half Diamond
    for(int i=0; i<n; i++){

        //Spaces
        for(int j=0; j<n-i-1; j++){

            cout << " ";
        }
        
        cout << "*";
        //Spaces
        for(int j=1; j<=2*i-1; j++){
            
            cout << " ";
            
        }
        if(i!=0)
        cout << "*";
        cout << endl;
    }


    // Next of Half
    for(int i=0; i<n-1; i++){
        //Spaces
        for(int j=0; j<=i; j++){
            cout << " ";
        }
        cout<<"*";

        if(i!=2){
            for(int j=0; j<2*(n-i)-5; j++)
            cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}