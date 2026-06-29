#include <iostream>
#include <vector>
using namespace std;


//Pair Sum By Brute Force
//Timecomplexity of O(n2)
vector<int> tgpair(vector<int> vec, int tg){
    vector<int> ans;
    for(int i=0; i<vec.size(); i++){
        for(int j=i+1; j<vec.size(); j++){
            if(vec.at(i)+vec.at(j)==tg){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}

int main() {
    vector<int> vec={1,7,4,6,9,8,3,2};
    int target=13;
    vector<int> pairs=tgpair(vec, target);

    cout << "The Desired Sum Pairs are: " << endl;
    for(int i=0; i<pairs.size(); i+=2){
        cout << pairs.at(i)<< ", " << pairs.at(i+1) << endl; 
    }
    return 0;
}