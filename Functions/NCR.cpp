#include <iostream>
using namespace std;

//Factorial Fuction
long long fact(int n){

    long long fact=1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

//Combination Function
long long ncr(int n, int r){
    long fact_n= fact(n);
    long fact_r= fact(r);
    long fact_n_r= fact(n-r);

    cout<< fact_n << " "<< fact_r << " "<< fact_n_r << endl;

    return fact_n/(fact_r*fact_n_r);
}

int main() {
    cout << "Factorial is: "<< fact(13) <<endl;
    cout << "NCR of 16,3: " << ncr(16,3) << endl; 
    return 0;
}