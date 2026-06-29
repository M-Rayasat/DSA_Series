#include <iostream>
#include <vector>
using namespace std;

//Pair Sum of Sorted Array
vector<int> tgpair(vector<int> vec, int tg) //O(n)
{
    vector<int> ans; 
    int i=0, j=vec.size()-1;
    while(i<j)
    {
        int ps=vec.at(i)+vec.at(j);

        if(ps<tg)
        i++;
        else if(ps>tg)
        j--;
        else
        {   ans.push_back(i);
            ans.push_back(j);
            break;
        }

    }
    return ans;

}


int main() {
      vector<int> vec={2,7,11,15};  //Sorted Array
    int target=13;
    vector<int> pairs=tgpair(vec, target);

     cout << "The Desired Sum Pairs are: " << endl;
    for(int i=0; i<pairs.size(); i+=2){
        cout << pairs.at(i)<< ", " << pairs.at(i+1) << endl; 
    }

    return 0;
}