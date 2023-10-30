#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool consonant(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return false;
    return true;
}

void bt (int i, vector<bool>& seen, vector<char>& l, vector<char>& letter) {
    if (i == seen.size()) {
        for (auto x: l) cout << x;
        cout << '\n';
    }
    else {
        for (int j = 0; j < seen.size(); ++j) {
            if (!seen[j]) {
                if (i && consonant(l[i-1]) && consonant(letter[j]))
                    continue;
                seen[j] = true;
                l[i] = letter[j];
                bt(i+1, seen, l, letter);
                seen[j] = false;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<bool> seen(n, false);
    vector<char> l (n);
    vector<char> letter(n);
    for (int i = 0; i < n; ++i) cin >> letter[i];
    sort(letter.begin(), letter.end());
    bt(0, seen, l, letter);
}