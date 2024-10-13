#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,cnt=0,cnt1=0;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(k==1 && !is_sorted(arr.begin(),arr.end())){
            cout<<"NO \n";
        }
        else{cout<<"YES\n";}
    }
}