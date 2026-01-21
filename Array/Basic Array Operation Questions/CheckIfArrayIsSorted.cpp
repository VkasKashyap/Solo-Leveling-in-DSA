#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check(vector<int> nums){
    int n = nums.size();
    for(int i=1;i<n;i++){
        if(nums[i] < nums[i-1]){
            return false;
        }
    }
    return true;
    
}

int main(){
    vector<int> nums = {1,2,3,4,5,5,6,7,7,8};
    cout<<check(nums);

    return 0;

}