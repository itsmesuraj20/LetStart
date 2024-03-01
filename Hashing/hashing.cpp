#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {20, 6, 5, 12, 27};
    unordered_map<int, int> mp;

    for(int i = 0; i < arr.size(); i++){
        mp[arr[i]] = i;
    }
    
    for(auto &it : mp){
        cout<<it.first<<" -> "<<it.second <<endl;
    }

    if(mp.find(5)==mp.end()){
        int index = mp[5];
        cout<<"Yes it is found at index = "
    }

    return 0;
}
