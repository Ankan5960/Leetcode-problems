#include<iostream>
#include<string>
#include<vector>

std::vector<std::string> fun(std::vector<std::string>& str, int length){
    std::vector<std::string>res;
    std::string resstr,temp;
    std::string first,last;
    for(int i=0;i<length;i++){
        if(str[i].length()>10){
            temp= std::to_string(str[i].length()-2);
            first=str[i].at(0);
            last=str[i].back();
            resstr=first+temp+last;
            res.push_back(resstr);
        }
        else{
           res.push_back(str[i]);
        }
    }
    return res;
}

int main()
{
    int length;
    std::cin>>length;
    std::vector<std::string> str;
    for(int i=0;i<length;i++){
        std::string inputString;
        std::cin>>inputString;
        str.push_back(inputString);
    }
    std::vector<std::string>res;
    res=fun(str,length);

    for(int i=0;i<res.size();i++){
        std::cout<<res[i]<<std::endl;
    }
}
