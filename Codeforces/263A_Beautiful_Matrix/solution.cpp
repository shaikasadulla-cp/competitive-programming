#include <bits/stdc++.h>
using namespace std;

int main() {
    int r = 0;
    int c = 0;
    vector<vector<int>> a (5, vector<int>(5));
    for(int i = 0; i <= 4; i++) {
        for(int j = 0; j <= 4; j++) {
            cin >> a[i][j];
            if(a[i][j] == 1) {
                r = i;
                c = j;
            }
        }
    }

    cout << abs(2 - r) + abs(2 - c);

    return 0;
}