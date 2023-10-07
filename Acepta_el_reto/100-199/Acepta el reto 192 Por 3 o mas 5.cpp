#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    const int max_n = 20001;
    vector<int> dp (max_n);
    dp[1] = 1;

    for (int i = 1; i < max_n; ++i) {
        if (!dp[i]) continue;
        if (i*3 < max_n) dp[i*3] = 1;
        if (i+5 < max_n) dp[i+5] = 1;
    }

    while (cin >> n) {
        if (!n) break;
        if (dp[n]) cout << "SI\n";
        else cout << "NO\n";
    }
}