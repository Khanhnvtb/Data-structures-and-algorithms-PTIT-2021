//
// Created by khanhnvtb on 18/06/2021.
//
/* Ý tưởng: 
*/
//khuyến khích thực hiện thực hành trước khi đi vào giải pháp.

#include <bits/stdc++.h>
using namespace std;

int n, pre[1005];

void init() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> pre[i];
}

void solve() {
    stack <int> s;
    for (int i = 0, j = 1; j < n; i++, j++) {
        if (pre[i] > pre[j]) s.push (pre[i]);
        else {
            bool found = false;
            while (!s.empty ()) {
                if (pre[j] > s.top ()) {
                    s.pop ();
                    found = true;
                } else break;
            }
            if (found) cout << pre[i] << " ";
        }
    }
    cout << pre[n - 1] << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        solve();
    }
    return 0;
}