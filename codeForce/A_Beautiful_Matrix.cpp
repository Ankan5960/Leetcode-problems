#include<iostream>
using namespace std;

int main()
{
    int arr[5][5];
    int onePosI,onePosJ;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                onePosI=i;
                onePosJ=j;
            }
        }
    }
    //cout<<onePosI<<" "<<onePosJ<<endl;
    int res=abs(2-onePosI)+abs(2-onePosJ);
    cout<<res;
}