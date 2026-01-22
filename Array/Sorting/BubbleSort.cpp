#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubbleSort(vector<int>& nums, int n){
    if(n==1 || n == 0)    return ;

    for(int i=0;i<n-1;i++){
        int flag = 0;
        for(int j=0;j<n-i-1;j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)   return;
    }
}

void print(vector<int> nums){
    for(int num : nums){
        cout<<num<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> nums1 = {1,5,3,2,4};
    vector<int> nums2 = {2};
    vector<int> nums3 = {};

    bubbleSort(nums1, nums1.size());
    bubbleSort(nums2, nums2.size());
    bubbleSort(nums3, nums3.size());

    print(nums1);
    print(nums2);
    print(nums3);

    return 0;
    
}