#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void reverse(vector<int>& nums, int start, int end){
    end--; 
    
    while(start < end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

void rotateLeft(vector<int>& nums, int k, int n){
    k = k % n; 
    reverse(nums, 0, k);
    reverse(nums, k, n);
    reverse(nums, 0, n);
}


void rotateRight(vector<int>& nums, int k, int n){
    k = k % n; 
    
    // 1. Reverse the first part (0 to n-k)
    reverse(nums, 0, n - k);
    // 3. Reverse the second part (n-k to n)
    reverse(nums, n - k, n);
    // 4. Reverse the whole array to put parts in correct order
    reverse(nums, 0, n);
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int n = nums.size();
    int k = 5;

    // Expected output for left rotate by 5: 6 7 8 9 0 1 2 3 4 5
    rotateLeft(nums, k, n);

    //rotate(nums.begin(), nums.begin() + k, nums.end());    built in function for for rotate an array
    cout<<"Rotate Left : ";
    for(int num : nums){
        cout << num << " ";
    }

    cout<<endl;
    cout<<"Rotate Right : ";
    rotateRight(nums, k, n);
    for(int num : nums){
        cout << num << " ";
    }

    return 0;
}