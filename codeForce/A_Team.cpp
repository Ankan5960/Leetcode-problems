#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    int x,y,z,res=0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        if(x+y+z>=2)
        {
            res++;
        }
    }
    cout<<res<<endl;
}