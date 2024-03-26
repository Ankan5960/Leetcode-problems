// problem Link:-https://leetcode.com/problems/two-sum/description/

#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        map<int,int>mpp;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            int need=target-a;
            if(mpp.find(need)!=mpp.end()){
                res.push_back(mpp[need]);
                res.push_back(i);
                return res;
            }
            mpp[a]=i;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int>vec={2,7,11,15};
    vector<int>sols=s.twoSum(vec,9);\
    for(int sol:sols){
        cout<<sol<<endl;
    }
}