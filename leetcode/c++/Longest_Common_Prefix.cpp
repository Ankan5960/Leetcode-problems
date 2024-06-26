//problem Link:- https://leetcode.com/problems/longest-common-prefix/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string FindPrefix(string str1,string str2){
        string res;
        for(int i=0;i<i<str1.length() || i<str2.length();i++){
            if(str1[i]==str2[i]){
                res.push_back(str1[i]);
            }
            else
                return res;
        }
        return res;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];
        for(int i=0;i<strs.size()-1;i++){
            res=FindPrefix(res,strs[i+1]);
        }
        return res;
    }
};

int main()
{
    vector<string>vec={"flower","flow","flight"};
    Solution sol;
    cout<<sol.longestCommonPrefix(vec);
}
