//Problem:-https://leetcode.com/problems/can-place-flowers/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                int prev=(i==0 || flowerbed[i-1]==0) ?0:1;
                int next=(i==flowerbed.size()-1 || flowerbed[i+1]==0) ?0:1;
                if(prev==0 && next==0){
                    flowerbed.at(i)=1;
                    n-=1;
                }
            }
        }
        if(n<=0){
             return true;
        }
        return false;
    }
};

int main()
{
    vector<int> vec={1,0,0,0,1};
    Solution sol;
    cout<<sol.canPlaceFlowers(vec,1);
}