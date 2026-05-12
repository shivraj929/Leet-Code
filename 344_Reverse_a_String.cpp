// 344. Reverse String

// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

 

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]
 

// Constraints:

// 1 <= s.length <= 105
// s[i] is a printable ascii character.

#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size()-1;
        for(int i=0;i<n/2.0;i++){
            swap(s[i],s[n-i]);
        }
    }
};
int main(){
    vector<char> s = {'h','e','l','l','o'};
    Solution obj;
    obj.reverseString(s);
    for(char p:s){
        cout<<p;
    }
}