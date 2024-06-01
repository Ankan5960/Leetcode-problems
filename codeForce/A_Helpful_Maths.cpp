#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<char,int>mpp;
    string numStr;
    cin>>numStr;

    int i=0;
    while(numStr[i]!='\0'){
        if(numStr[i]=='1'){
            mpp['1']++;
        }
        else if(numStr[i]=='2'){
            mpp['2']++;
        }
        else if(numStr[i]=='3'){
            mpp['3']++;
        }
        i+=2;
    }

    string resStr="";
    for(auto it:mpp){
        //cout<<it.first<<" "<<it.second<<endl;
        for(int i=0;i<it.second;i++){
            if(resStr==""){
              resStr=it.first;
              continue;  
            }
            resStr=resStr+"+"+it.first;
        }
            
    }
    cout<<resStr;
}