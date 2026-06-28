#include <iostream>
using namespace std;

int reverse(int num){
    int temp=num;
    int rev=0;
    while(temp>0){
        int n=temp%10; //last digit of number
        temp/=10; //remove last digit of number
        rev=rev*10+n; //move next place of number
    } return rev;
}

int main() {
    int n= 12345678;
    cout << "Reverse of " << n << " is: " << reverse(n);
    return 0;
}