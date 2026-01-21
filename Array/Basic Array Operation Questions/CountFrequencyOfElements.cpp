#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void countFrequency(vector<int> nums){
    if(nums.empty())    return;
    sort(nums.begin(), nums.end());

    int n = nums.size();
    int count = 1;

    cout<<" Element  |  Frequency "<<endl;
    for(int i=1;i<n;i++){
        if(nums[i] == nums[i-1]){
            count++;
        }
        else{
            cout<<"       "<<nums[i-1]<<"  |  "<<count<<endl;
            count = 1;
        }
    }
    cout<<"       "<<nums[n-1]<<"  |  "<<count<<endl;
}

int main(){
    vector<int> nums = {1,1,2,3,4,5,1,2,3,4,5,8,7,2,1,4,2,1,0,5,4,0,5,9,8};
    countFrequency(nums);

    return 0;
}