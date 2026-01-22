#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void selectionSort(vector<int>& nums, int n){
    for(int i=0;i<n;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(nums[j] < nums[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            swap(nums[i], nums[min_index]);
        }
    }

    return;
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

    selectionSort(nums1, nums1.size());
    selectionSort(nums2, nums2.size());
    selectionSort(nums3, nums3.size());

    print(nums1);
    print(nums2);
    print(nums3);

    return 0;
    
}