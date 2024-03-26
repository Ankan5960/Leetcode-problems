//Porblem Link:- https://leetcode.com/problems/valid-parentheses/

#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    stack<char> stack;
    bool isValid(string s) {
        for(int i=0;i<s.length();i++){
            if(stack.empty())
                stack.push(s[i]);
            else if((stack.top()=='(' && s[i]==')')||(stack.top()=='{' && s[i]=='}')||(stack.top()=='[' && s[i]==']')){
                stack.pop();
            }
            else  
                stack.push(s[i]);
        }
        if(stack.empty())
            return true;
        return false;
    }
};
int main()
{
    string str="{()}[]";
    Solution sol;
    if(sol.isValid(str)){
        cout<<"True";
    }
    else 
        cout<<"False";
}