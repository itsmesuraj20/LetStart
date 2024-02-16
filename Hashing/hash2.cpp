#include<bits/stdc++.h>
using namespace std;

void countCharacter(map<char,int> &mp ,string str)
{
    for(int i = 0;i<str.length();i++){
        char ch = str[i];
        mp[ch]++;
    }
}

int main(){
    string str = "surajsingh";
   map<char,int> mpp;
    // map<char,int>m;

    countCharacter(mpp,str);

    for(auto i : mpp)
    {
        cout<<i.first << " -> " << i.second <<endl;
    }
    return 0;
}

