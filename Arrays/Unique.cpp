#include <iostream>
using namespace std;

void unique(int arr[], int size){
    cout << "Unique Values are: "<< endl;
    for(int i=0; i<size; i++){
        
        bool isunique=true;
        
        for(int j=i; j<size; j++){
            if(i!=j && arr[i]==arr[j]){
                isunique=false;
                break;
            }

        }
        if(isunique)
        cout << arr[i]<< " ";
        

    }


}

int main() {
    int size=16;
    int arr[size]={8,3,9,5,1,5,1,2,3,7,5,0,4,1,9,5};
    unique(arr, size);
    return 0;
}