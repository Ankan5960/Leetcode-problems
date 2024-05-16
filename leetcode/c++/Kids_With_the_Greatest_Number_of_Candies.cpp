#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=*max_element(candies.begin(), candies.end());
        vector<bool>res;
        for(int i:candies)
        {
            if(i+extraCandies>=max){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
    }
};

int main()
{
    vector<int> vec={2,3,5,1,3};
    int extraCandies = 3;
    Solution sol;
    vector<bool> res=sol.kidsWithCandies(vec,extraCandies);
    for(bool i:res){
        if(i)
            cout<<"True,";
        else
            cout<<"False,";
    }
}