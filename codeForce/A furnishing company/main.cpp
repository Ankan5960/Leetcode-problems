#include<iostream>
#include<string>

using namespace std;

int countA(string str)
{
    int count=0;
    for(char s:str){
        if(s=='a'){
            count++;
        }
    }
    return count;
}

int FindMaxA(string str,int L)
{
    int start_pos=0,end_pos=L;
    int numOfA=0;
    int last=str.length()/L;
    string SubStr;
    for(int i=0;i<last;i++){
        SubStr=str.substr(start_pos,L);
        cout<<SubStr<<endl;
        int temp=countA(SubStr);
        if(temp>numOfA){
            numOfA=temp;
        }
        start_pos+=L;
        end_pos+=L;
    }
    
    //if last few element left
    if(start_pos<str.length()){
        end_pos=end_pos-start_pos;
        SubStr = str.substr (start_pos, end_pos);
        cout<<SubStr<<endl;
        int temp=countA(SubStr);
        if(temp>numOfA){
            numOfA=temp;
        }
    }
    return numOfA;
}

int main()
{
    string str;
    int L;
    cin>>str>>L;
    cout<<FindMaxA(str,L);
}