#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int pt=n-1;
        for(int ptr=0;ptr<n-1;ptr++){
            arr[ptr]+=1;
            
            for (int i = 1; i < n; i++) {
                     if (arr[i] < arr[i - 1]){}
                        cnt++;
                         continue;}
                        else{
                            break;
                         }}}
        
         for(int ptr=n-2;ptr<n;ptr++){
            arr[ptr]-=1;
             
            for (int i = 1; i < n; i++) {
                     if (arr[i] < arr[i - 1]){
                         cnt++;
                         continue;}                      
                            else{
                            break;
                         }}
                          cout<<cnt<<endl;
                         }

                        

        }










    
