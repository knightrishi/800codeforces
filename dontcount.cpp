#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        bool found =false;
        string x,s;
        cin>>x;
        cin>>s;
        for(int op=0;op<=5;op++){
            if(x.find(s)!=string::npos){
                cout<<op<<endl;
                found=true;
                break;
            }
            x.append(x);     //operation;
        }
        if(!found)cout<<"-1"<<endl;













    }
}
            /*3
1
2
-1
1
0
1
3
1
0
2
5*/