#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> res;
	    int index=1;
	    for(int i=0;i<n;i++)
	    {
	        if(index==arr[i])
	        {
	            res.push_back(arr[i]);
	        }
	        index++;
	    }
	    return res;
	}
};

int main()
{
    Solution test;

    int arr[]={15, 2, 3, 45, 12, 7};
    int n=sizeof(arr)/sizeof(int);

    vector<int> res=test.valueEqualToIndex(arr,n);
	 for (int value : res) {
        std::cout << value << std::endl;
    }
   
}