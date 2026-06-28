#include <iostream>
using namespace std;

int main() {
    int n=4;
    char ch='A';
    //Number of lines
    for(int i=0; i<n; i++){
        
        //Number of Spaces
        for(int j=0; j<i; j++){
            cout << " ";
        }
        //Number of chracters
        for(int j=0; j<n-i; j++)
        cout << ch;
        
        cout<<endl;
        ch++;
    }
    return 0;
}