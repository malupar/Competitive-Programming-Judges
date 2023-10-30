#include <iostream>
#include <vector>

using namespace std;

vector<int> ans;
int best = 1e9;

void bt (int i,const vector<vector<int>>& dislike, vector<int>& id, int sum, vector<bool>& seen) {
    int n = id.size();
    if (sum > best) return;
    if (i == n) {
        if (sum < best) {
            ans = id;
            best = sum;
        }
    }
    else {
        for (int j = 1; j < n; ++j) {
            if (!seen[j]) {
                seen[j] = true;
                id[i] = j;
                bt(i+1, dislike, id, sum+dislike[id[i-1]][j], seen);
                seen[j] = false;
            }
        }
    }
}

int main() {
    int n;
    while (cin >> n) {
        best = 1e9;
        vector<vector<int>> dislike(n, vector<int>(n));
        vector<int> id (n);
        vector<bool> seen(n, false);
        seen[0] = true;
        vector<string> name(n);
        for (int i = 0; i < n; ++i) cin >> name[i];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) cin >> dislike[i][j];
        }

        bt(1, dislike, id, 0, seen);
        cout << best << '\n';
        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << name[ans[i]];
        }
        cout << '\n';
    }
}