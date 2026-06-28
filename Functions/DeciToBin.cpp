#include <iostream>
using namespace std;

int DeciToBin(int deci){

    int ans=0, pow=1; //10^0
    while(deci>0){
        int rem = deci%2;
        deci /= 2;

        ans += (rem*pow);
        pow *= 10;
    }
    return ans; // Binary Number
}

int BinToDeci(int bin){
     
    int ans=0, pow=1; //2^0
    while(bin>0){
        int rem = bin%10;
        ans += (rem*pow);

        bin /= 10;
        pow *=2;

    }
    return ans; // Decimal
}

int main() {
    int n=1010;

    cout << BinToDeci(n);
   
    return 0;
}