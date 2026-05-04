// Given a non-negative integer num, return true if num can be expressed as the sum of any non-negative integer and its reverse, or false otherwise.

 

// Example 1:

// Input: num = 443
// Output: true
// Explanation: 172 + 271 = 443 so we return true.
// Example 2:

// Input: num = 63
// Output: false
// Explanation: 63 cannot be expressed as the sum of a non-negative integer and its reverse so we return false.
// Example 3:

// Input: num = 181
// Output: true
// Explanation: 140 + 041 = 181 so we return true. Note that when a number is reversed, there may be leading zeros.
 

// Constraints:

// 0 <= num <= 105
 


#include<iostream>
using namespace std;
class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        int target=num;
        if(target<0){
            return 0;
        }
        for(int i=0;i<=num;i++){
            int temp=i;
            int current=i;
            long long rev=0;
            while(temp){
                rev=rev*10+temp%10;
                temp/=10;
            }
            if(rev+current==target){
                return 1;
            }
        }
        return 0;
    }
};
int main(){
    int n;
    cout<<"Enter number:-";
    cin>>n;
    Solution obj;
    if(obj.sumOfNumberAndReverse(n)==0){
        cout<<"False";
    }
    else{
        cout<<"True";
    }
}