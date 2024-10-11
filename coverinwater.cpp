#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x=0;
        bool f=true;
        cin>>n;
        string s;
        cin>>s;
         for(int i=0;i<n;i++){
            if(s[i]=='.')x++;

            if(i>0 && i<n)
      if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
        cout<<2<<endl;
        f=false;
        break;
         }
    }
    
      if(f){
        cout<<x<<endl;
      }  
 

    }
}