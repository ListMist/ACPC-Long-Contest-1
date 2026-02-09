#include <bits/stdc++.h>
using namespace std;
#define sl set<long long>
#define ll long long

int main() {
    int n;
    cin >> n;

    sl s;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        s.insert(x);
    }

    cout << s.size() <<endl;
    return 0;
}