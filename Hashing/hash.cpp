#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string , int> mp;
    
    //INSERTION

    pair<string ,int> q("Suraj" , 24);
    
    pair<string ,int> q2;
    
    q2.first = "Ashika";
    q2.second = 21;
    
    pair<string ,int> q12;
    q12.first = "a";
    q12.second = 97;
    
    mp.insert(q);
    mp.insert(q2);
    mp.insert(q12);


    //Method 2 : hashing as a square bracket
    mp["babbar"] = 51;

    //ACCESS
    cout<<"A) "<< mp.at("Suraj")<<endl;
    cout<<"B) "<< mp["Suraj"]<<endl;

    //searching
    cout<<mp.count("ashika")<<endl;

    //searching Method : 2
    if(mp.find("Suraj") != mp.end()){
        cout<<"Found" <<endl;
    }
    else{
        cout<<"Not Found" <<endl;
    }


    cout<<"Size of Map: "<< mp.size()<<endl;
    return 0;
}