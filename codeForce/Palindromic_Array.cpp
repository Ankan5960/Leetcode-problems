#include<iostream>
using namespace std;

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++){
    	   int res=ispal(a[i]);
    	   if(res==0){
    	       return 0;
    	   }
    	   else 
    	       continue;
    	}	
    	return 1;
    }
    
    int ispal(int num)
    {
        int rev=0;
        int temp=num;
        while(temp!=0){
            rev=(rev*10)+(temp%10);
            temp/=10;
        }
        if(rev==num){
            return 1;
        }
        else 
            return 0;
    }
};

int main()
{
    Solution test;
    int arr[]={111,222,333,444,555};
    int n=sizeof(arr)/sizeof(int);

    cout<<test.PalinArray(arr,n)<<endl;
}