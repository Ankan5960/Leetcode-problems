
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int strToint(char ch)
    {
        switch(ch)
        {
            case 'I':return 1;
            case 'V':return 5;
            case 'X':return 10;
            case 'L':return 50;
            case 'C':return 100;
            case 'D':return 500;
            case 'M':return 1000;
        }
        return 0;
    }

    int romanToInt(string s) {
        int res=0;
        for(int i=0;i<s.length();i++){
            int s1=strToint(s[i]);
            int s2=strToint(s[i+1]);
            if(s1>=s2){
                res+=s1;
            }
            else{
                res+=(s2-s1);
                i++;
            }
        }
        return res;
    }
};

int main()
{
    string str;
    cin>>str;
    Solution sol;
    cout<<sol.romanToInt(str);
}