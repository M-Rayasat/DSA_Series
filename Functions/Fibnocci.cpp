#include <iostream>
using namespace std;

int fib(int x){
    int first=0;
    int second=1;
    int sum=0;
    for(int i=1; i<=x; i++ ){
        sum=first+second;
        first=second;
        second=sum;

    }
    cout << x <<"th Fibnocci Number is: "<< first;
    return 0;
}

int main() {
    fib(32);
    return 0;
}