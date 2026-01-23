#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool customSort(int a, int b){
    if(a%2 == 0 && b%2 != 0)    return true;
    if(a%2 != 0 && b%2 == 0)    return false;        
    return a < b;
}

void segregateEvenOdd(vector<int>& arr) {
    sort(arr.begin(), arr.end(), customSort);
}

void print(vector<int>& nums){
    for(int num : nums){
        cout<<num<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> nums1 = {12, 34, 45, 9, 8, 90, 3};
    vector<int> nums2 = {0, 1, 2, 3, 4};
    vector<int> nums3 = {10, 22, 4, 6};

    segregateEvenOdd(nums1);
    segregateEvenOdd(nums2);
    segregateEvenOdd(nums3);
    
    print(nums1);
    print(nums2);
    print(nums3);

    return 0;
}