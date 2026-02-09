#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
#define YES cout << "yes"<<endl;
#define NO cout << "no"<<endl;
int main() {
    fast
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        long long a, b, c;
        cin >> a >> b >> c;
        ll mx = max(a, max(b,c));
        ll A, B;

        if (mx == a) {
            A= b; B = c;
        } else if (mx == b) {
            A = a; B = c;
        } else {
            A = a; B = b;
        }
        cout << "Case " << i << ": ";
        if (mx * mx == A*A + B*B)
            YES
        else
            NO
    }

    return 0;
}