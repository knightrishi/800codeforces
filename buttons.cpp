#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int a,b,c;
        cin>>a>>b>>c;
         if(a%3==0 && b%3==0 && c%3==0){
            cout<<"First \n";
        }
        else if(a==b && b==c){
            cout<<"First\n";
        }
        else{
            cout<<"Second \n";
        }


    }
}
/*if(a>b){
    cout<<"First\n";

}
else if(b>a){
    cout<<"Second\n";
}
else{
    if(c%2==0){
        cout<<"Second\n";
    }
    else{
        cout<<"First\n";
    }
}



    }
}*/