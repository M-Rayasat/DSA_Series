#include <iostream>
using namespace std;

// Number is prime or not?
bool isprime(int x)
{
    for(int i=2; i<x; i++)
    {
        if(x%i==0)
        {
        return false;
        }
    }
    return true;
}

// Prime Number from 2 to N
void prime(int n){
    for(int i=2; i<=n; i++){
        if(isprime(i))
        cout << i << " ";
    }
}

int main() {
    
    prime(100000);

    cout<<"/nCompleted";
    return 0;
}