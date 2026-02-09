#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0);

int main() {
    fast
    string s;
    while (getline(cin, s)) {
        for (int i = 0; i < 26; i++) {
            string decoded = s;

            for (char &c : decoded) {
                if (c >= 'a' && c <= 'z') {
                    c = (c - 'a' - i + 26) % 26 + 'a';
                }
            }
            if (decoded.find("the") != string::npos ||
                decoded.find("this") != string::npos ||
                decoded.find("that") != string::npos) {
                cout << decoded << endl;
                break;
            }
        }
    }

    return 0;
}