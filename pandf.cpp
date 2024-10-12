#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;

        for (int i = 0; i < n / 2; i++) {
            if ((s[i] == '0' && s[n - 1 - i] == '1') || (s[i] == '1' && s[n - 1 - i] == '0')) {
                cnt += 2;
            }
        }

        cout << n - cnt << endl;
    }
    return 0;
}