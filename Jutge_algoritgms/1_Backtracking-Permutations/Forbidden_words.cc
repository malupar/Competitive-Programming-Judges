#include <iostream>
#include <vector>

using namespace std;

void bt (int i, vector<bool>& seen, vector<char>& l) {
    if (i == seen.size()) {
        for (auto x: l) cout << x;
        cout << '\n';
    }
    else {
        for (int j = 0; j < seen.size(); ++j) {
            if (!seen[j]) {
                if (i && l[i-1]-'a'+1 == j)
                    continue;
                seen[j] = true;
                l[i] = j + 'a';
                bt(i+1, seen, l);
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
    bt(0, seen, l);
}