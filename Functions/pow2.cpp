#include <iostream>
using namespace std;

void powof(int num, int base)
{
    int temp=num;
    int exponent=0;
    while(num>0)
    {
        if(num%base==0)
        {   exponent++;
            num/=base;
            if(num==1){
            cout << temp << " is " << exponent << "th power of " << base;
            break;
            }
        }
        else
        {
            cout << temp << " is not power of " << base;
            break;
        }
        }
}

int main() {
    
    int n=2048;
    int b=2;
    powof(n,b);
    return 0;
}