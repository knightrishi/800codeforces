#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int cnt = 0;
        vector<int> b, c;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i] % a[j] == 0) {
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i] % a[j] == 0) {
                    b.push_back(a[i]);
                } else {
                    c.push_back(a[j]);
                }
            }
        }

        for (int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < c.size(); i++) {
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
