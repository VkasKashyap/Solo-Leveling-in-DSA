#include<iostream>
#include<vector>
using namespace std;

int getMin(vector<int> nums, int n){
    int mini = INT_FAST16_MAX;
    for(int i=0;i<n;i++){
        if(nums[i] < mini){
            mini = nums[i];
        }
    }
    return mini;
}

int getMax(vector<int> nums, int n){
    int maxi = INT_FAST16_MIN;
    for(int i=0;i<n;i++){
        if(nums[i] > maxi){
            maxi = nums[i];
        }
    }
    return maxi;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9,0};
    int n = 10;
    cout<<"Minimum Element in array is : "<<getMin(nums,n)<<endl;
    cout<<"Maximum Element in array is : "<<getMax(nums,n)<<endl;

    return 0;
}
