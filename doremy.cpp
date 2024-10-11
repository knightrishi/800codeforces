#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,temp=0,sum=0;
        cin>>n;
        int a[n];
        unordered_map <int,int> mp;
        bool yes= true;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         for(int i=0;i<n;i++){
            mp[a[i]]++;
            if(mp.size()>2){
                yes=false;
                break;
            }

            }
             if(mp.size()==2){
                int f1=begin(mp)->second;
                if(f1!=n/2 && f1!=(n+1)/2){
                    yes=false;
                }
            }
            if(yes)
            cout<<"YES"<<endl;

            else{
                cout<<"NO"<<endl;
            }
        }
}








    