#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort1(vector<int>& nums){
    sort(nums.begin(), nums.end());     //O(nlogn)   complexity
}

void sort2(vector<int>& nums){          // time complexity      O(n)
    int c0 = 0, c1 = 0, c2 = 0, n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i] == 0)    c0++;
        if(nums[i] == 1)    c1++;
        if(nums[i] == 2)    c2++;
    }
    int idx = 0;
    for(int i=0;i<c0;i++){
        nums[idx++] = 0;
    }
    for(int i=0;i<c1;i++){
        nums[idx++] = 1;
    }
    for(int i=0;i<c2;i++){
        nums[idx++] = 2;
    }
}

void sort3(vector<int>& nums){      //Dutch National Flag algorithm     time Complexity : O(n)
    int lo = 0, mid = 0, hi = nums.size()-1;
    while(mid <= hi){
        if(nums[mid] == 0){
            swap(nums[lo++], nums[mid++]);
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else if(nums[mid] == 2){
            swap(nums[mid], nums[hi--]);
        }
    }
}

void print(vector<int> nums){
    for(int num : nums){
        cout<<num<<" ";
    }
    cout<<endl;
}


int main() {
    vector<int> arr = { 0, 1, 2, 0, 1, 2 };
    vector<int> nums = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    vector<int> ans = {0,1,2,1,0,2,1,0,2,1,2,0,2,1,2,0,1,2,1,0,1,2,0};
    sort1(arr);
    sort2(nums);
    sort3(ans);

    print(arr);
    print(nums);
    print(ans);

    return 0;
    
}