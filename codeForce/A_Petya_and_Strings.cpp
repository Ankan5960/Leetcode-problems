#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;

    int sum1=0,sum2=0;
    for(int i=0;i<str1.length();i++){
        sum1+=str1[i]-'A';
    }
    for(int i=0;i<str2.length();i++){
        sum2+=str2[i]-'A';
    }
    if(sum1>sum2){
        cout<<"-1\n";
    }
    else if(sum1<sum2){
        cout<<"1\n";
    }
    else 
    {
        cout<<"0";
    }

}