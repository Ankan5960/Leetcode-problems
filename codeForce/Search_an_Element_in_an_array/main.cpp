#include<iostream>
using namespace std;

class Solution{
    public:
    int search(int arr[], int N, int X)
    {
        for(int i=0;i<N;i++)
        {
            if(X==arr[i])
            {
                return i;
            }
        } 
        return -1;
    }
};

int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);

    Solution test;
    cout<<test.search(arr,n,3);
}