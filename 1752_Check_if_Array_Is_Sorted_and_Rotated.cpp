// 1752. Check if Array Is Sorted and Rotated

// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

// There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.

 

// Example 1:

// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].
// Example 2:

// Input: nums = [2,1,3,4]
// Output: false
// Explanation: There is no sorted array once rotated that can make nums.
// Example 3:

// Input: nums = [1,2,3]
// Output: true
// Explanation: [1,2,3] is the original sorted array.
// You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
 

// Constraints:

// 1 <= nums.length <= 100
// 1 <= nums[i] <= 100

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(n<=2){
                return true;
            }
            if(nums[i]>nums[i+1]){
                k=i+1;
            }
            
        }
        if(k==0){
            return true;
        }
        int r=n-k;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+r);
        reverse(nums.begin()+r,nums.end());
        for(int i =0;i<nums.size()-1;i++){
            int k=0;
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        return true;
    }
};
int main(){
    vector<int> nums={3,4,5,1,2};
    Solution obj;
    cout<<obj.check(nums);
}