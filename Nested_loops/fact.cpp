#include <iostream>
using namespace std;

int main() {
    double fact=1;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        fact*=i;
    }
    cout << "The factorial of " << n << " is: " << fact << endl;
    cout << fact;
    return 0;
}