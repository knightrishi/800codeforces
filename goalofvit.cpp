#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        int a[n-1];
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
          for(int i=0;i<n-1;i++){
            sum=sum+a[i];
        }
       
        cout<<-1*sum<<endl;



   








    }
}