#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int bs(vector<int>& x, int start, int end, int target){
    while(start<=end){
        int mid = start+(end-start)/2;
        if(x[mid] == target){
            return mid;
        }
        else if(x[mid] < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return 0;
}

vector<int> twoSum(vector<int>& v, int target) {
    for(int i=0;i<v.size();i++){
        if(bs(v,i+1,v.size()-1,target-v[i])){
            return {i+1,bs(v, i+1, v.size()-1, target-v[i])+1};
        }
    }
    return {};
}

void print(vector<int>& nums){
    for(int num : nums){
        cout<<num<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> nums1 = {2,7,11,15};
    vector<int> nums2 = {2,3,4};
    vector<int> nums3 = {-1,0};

    vector<int> ans1 = twoSum(nums1,9);
    vector<int> ans2 = twoSum(nums2,6);
    vector<int> ans3 = twoSum(nums3,-1);

    print(ans1);
    print(ans2);
    print(ans3);

    return 0;

}