#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, count = 0;
    
    cin >> num;
    while(num > 0) {
        int n;
      
        cin >> n;
        int l = to_string(n).length();
        int ans = 0;
        ans += n / pow(10, l - 1);
        l -= 1;
        ans += 9 * l;
        cout << ans << endl;
        num--;
    }
    return 0;
}