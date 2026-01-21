#include<iostream>
#include<vector>
#include<set>
using namespace std;

int unique(vector<int> nums){
    set<int> s(nums.begin(), nums.end());

    return s.size();
}

int main(){
    vector<int> nums = {1,1,2,2,3,3,4,4,4,4,5,5,5,6};
    cout<<"NO. of unique element is : "<<unique(nums);

    return 0;
}