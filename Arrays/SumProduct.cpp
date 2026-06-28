#include <iostream>
using namespace std;

int sum(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    return sum;
}
int product(int arr[], int size){
    int product=1;
    for(int i=0; i<size; i++){
        product*=arr[i];
    }
    return product;
}

int main() {
    int size=5; 
    int arr[size]={1,4,5,3,5};
    int prod=product(arr,size);
    int su=sum(arr,size);

    cout << "Sum of Array Elements are: "<< su << endl;
    cout << "Product of Array Elements are: "<< prod << endl;

    return 0;
}