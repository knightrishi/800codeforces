#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        
         int mina=INT_MIN;
         int res=mina;
            int maxi=INT_MAX;
        while(n--){
            int a,x,k;
           
            cin>>a>>x;
            if(a==1){
                k>=x;
                mina=min(x,mina);
            }
            else if(k==2){
                k<=x;
                 maxi=max(x,maxi);
            }
            else{
                k!=x;
                cnt++;
            }
        }
    for(int i=mina;i<=maxi;i++ ){
        res++;
    }
    cout<<res-cnt<<endl;
    }
}