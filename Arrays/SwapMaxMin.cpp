#include <iostream>
using namespace std;

//largest number in array
int max(int arr[], int size){
    int largest=INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>largest)
        largest=arr[i];
    }
    return largest;
}

//smallest number of array
int min(int arr[], int size){
    int smallest=INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<smallest)
        smallest=arr[i];
    }
    return smallest;
}

//Swaping Minimum and Maximum of Array
void swaping(int arr[], int size){ 
    
    //Smallest value address
    int smallest=INT_MAX;
    int sad=-1;
    for(int i=0; i<size; i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
            sad=i;
        }
    }
        
    //Largest value address
    int largest=INT_MIN;
    int lad=-1;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>largest)
        {
        largest=arr[i];
        lad=i;
        }
    }


    int min=sad,max=lad;

    swap(arr[min],arr[max]);
}

//element of array;
void elem(int arr[], int size){
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main() {
     int size=5; 
    int arr[size]={1,4,5,3,6};
    cout <<"Maximum of Array: " << max(arr,size) << endl;
    cout <<"Minimum of Array: " << min(arr,size) << endl;
    
    
    cout <<"Before Swaping Maximum to Minimum of Array: " << endl;
    elem(arr,size);
    swaping(arr,size);
    cout <<"After Swaping Maximum to Minimum of Array: " << endl;
    elem(arr,size);


    return 0;
}