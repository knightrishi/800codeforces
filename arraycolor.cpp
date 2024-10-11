#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,res=0;
        cin>>n;
        bool found= false;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=0;i<n;i++){
            sum=sum-a[i];
            if(sum%2!=0 && a[i]%2!=0){
               
                found=true;
            }
            else if(sum%2==0 && a[i]%2==0)
            {
         
                found=true;
            }
            else{
                sum=sum+a[i];
            }
        }
    if(found){
        cout<<"YES \n";
    }
    else{
        cout<<"NO \n";
    }








    }
}