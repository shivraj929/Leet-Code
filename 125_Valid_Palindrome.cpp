// 125. Valid Palindrome

// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

 

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:

// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.
 

// Constraints:

// 1 <= s.length <= 2 * 105
// s consists only of printable ASCII characters.

#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        
        string cmp = "";
        for(char ch : s) {

            if(isalnum(ch)) {
                cmp += tolower(ch);
            }
        }
        int l=0,h=cmp.size()-1;
        while(l<h){
            if(cmp[l]!=cmp[h]){return false;}
            l++;
            h--;
        }
        return true;
    }
};
int main(){
    string s="A man, a plan, a canal: Panama";
    Solution obj;
    if(obj.isPalindrome(s)==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}