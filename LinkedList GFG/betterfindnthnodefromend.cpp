#include<bits/stdc++.h>
using namespace std;

 //Codeforces Solution 
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        
        if(x + y == z){
            cout<<"+"<<endl;
        }
        else{
            cout<<"-"<<endl;
        }
    }
    return 0;
}
