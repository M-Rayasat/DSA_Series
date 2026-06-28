#include <iostream>
using namespace std;

int main() {
    int n, sum=0;
    cout << "Enter a Number: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%3==0)
        sum+=i;
    }
    cout << "sum of numbers which are dividing " << n << " by 3: " << sum << endl;
          return 0;
}