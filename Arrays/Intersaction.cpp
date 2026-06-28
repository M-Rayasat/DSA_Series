#include <iostream>
using namespace std;

void intersect(int ar1[], int s1, int ar[], int s2){
    for(int i=0; i<s1; i++){
        for(int j=0; j<s2; j++)
            if(ar1[i]==ar[j])
                cout << ar1[i] << " ";
    }
}


int main() {
    int s1=6,s2=4;
    int ar1[s1]={1,3,6,5,7,9};
    int ar2[s2]={7,5,3,8};

    intersect(ar1,s1,ar2,s2);



    return 0;
}