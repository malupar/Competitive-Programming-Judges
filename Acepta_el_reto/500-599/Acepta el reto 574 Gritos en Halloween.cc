#include <iostream>
#include <vector>
using namespace std;

long long gritos(int n) {
    if (n == 1) return 3;
    return 2*gritos(n-1)+n+2;
}

void rec(int n, vector<long long>& total, long long k) {
    if (n == 0) {
        if (k == 1) cout << "B\n";
        else if (k == 2) cout << "U\n";
        else cout << "H\n";
        return;
    }
    if (k <= total[n-1]) rec(n-1, total, k);
    else if (k > total[n]-total[n-1]) rec(n-1, total, k-total[n]+total[n-1]);
    else {
        if (k == total[n-1]+1) cout << "B\n";
        else if (k == total[n]-total[n-1]) cout << "H\n";
        else cout << "U\n"; 
        return;
    }
}

int main() {
    int n, k;
    vector<long long> total;
    for (int i = 1; i < 62; ++i) {
        total.push_back(gritos(i));
    }
    while (cin >> n >> k) {
        rec(n-1, total, k);
    }
}