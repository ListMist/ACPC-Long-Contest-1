#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0);

int main() {
    fast
    int T;
    cin >> T;
    double pi = 2 * acos(0.0);

    for (int i = 1; i <= T; i++) {
        double r;
        cin >> r;
        double sArea, cArea, rArea;
        sArea = 4.0*r*r;
        cArea = pi*r*r;
        rArea =(4.0 - pi) * r * r;
        rArea += 1e-9;
        cout << "Case " << i << ": ";
        cout << fixed << setprecision(2) << rArea << endl;
    }
    return 0;
}