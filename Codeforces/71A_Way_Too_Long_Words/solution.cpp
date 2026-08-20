#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    while(n-- > 0) {
        string s;
        cin >> s;

        int l = s.size();

        if(l < 11) {
            cout << s << endl;
        }

        else {
            cout << s[0] << l-2 << s[l-1] << endl;
        }
    }

    return 0;
}