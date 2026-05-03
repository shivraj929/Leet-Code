// Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

// A shift on s consists of moving the leftmost character of s to the rightmost position.

// For example, if s = "abcde", then it will be "bcdea" after one shift.
 

// Example 1:

// Input: s = "abcde", goal = "cdeab"
// Output: true
// Example 2:

// Input: s = "abcde", goal = "abced"
// Output: false
 

// Constraints:

// 1 <= s.length, goal.length <= 100
// s and goal consist of lowercase English letters.

// Solution

#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal){
            return 1;
        }
        if(s.length()!=goal.length()){
            return 0;
        }
        for(int i =0;i<s.length();i++){
            char ch=s[0];
            s.erase(0,1);
            s.push_back(ch);
            if(s==goal){
                return 1;
            }
        }         
        return 0;
    }
};
int main(){
    Solution obj;
    string inp_s;
    string goal_s;
    cout<<"enter input string:-";
    cin>>inp_s;
    cout<<"enter goal string:-";
    cin>>goal_s;
    if(obj.rotateString(inp_s,goal_s)==0){
        cout<<"False";
    }
    else{
        cout<<"True";
    }
}