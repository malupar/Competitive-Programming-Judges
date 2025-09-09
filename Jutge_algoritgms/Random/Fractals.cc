#include <bits/stdc++.h>
using namespace std;

char neg(char x) {
    if (x == '.') return 'X';
    if (x == 'X') return '.';
    if (x == 'p') return 'n';
    return 'p';
}

char out(char x) {
    if (x == '.') return '.';
    if (x == 'n') return '.';
    return 'X';
}

int main() {
    int n, m, k;
    while (cin >> n >> m >> k) {
        vector<vector<char>> M1(n, vector<char>(m));
        vector<vector<char>> M2(n, vector<char>(m));
        for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) cin >> M1[i][j];
        M2 = M1;
        int N = n, M = m;
        for (int t = 0; t < k; ++t) {
            if (t) cout << '\n';
            N *= n;
            M *= m;
            vector<vector<char>> M3(N, vector<char> (M));
            for (int i = 0; i < N/n; ++i) {
                for (int j = 0; j < M/m; ++j) {
                    if (M2[i][j] == '.') {
                        for (int i2 = 0; i2 < n; ++i2) {
                            for (int j2 = 0; j2 < m; ++j2) {
                                M3[i*n+i2][j*m+j2] = '.';
                            }
                        }
                    }
                    if (M2[i][j] == 'X') {
                        for (int i2 = 0; i2 < n; ++i2) {
                            for (int j2 = 0; j2 < m; ++j2) {
                                M3[i*n+i2][j*m+j2] = 'X';
                            }
                        }
                    }
                    if (M2[i][j] == 'p') {
                        for (int i2 = 0; i2 < n; ++i2) {
                            for (int j2 = 0; j2 < m; ++j2) {
                                M3[i*n+i2][j*m+j2] = M1[i2][j2];
                            }
                        }
                    }
                    if (M2[i][j] == 'n') {
                        for (int i2 = 0; i2 < n; ++i2) {
                            for (int j2 = 0; j2 < m; ++j2) {
                                M3[i*n+i2][j*m+j2] = neg(M1[i2][j2]);
                            }
                        }
                    }
                }
            }

            M2 = M3;
            for (int i = 0; i < N; ++i) {
                for (int j = 0; j < M; ++j) {
                    cout << out(M2[i][j]);
                }
                cout << '\n';
            }
        }
        cout << "**********\n";
    }
}