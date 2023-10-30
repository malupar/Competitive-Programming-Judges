#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> matrix;

int m;

matrix operator*(matrix A, matrix B) {
    matrix C(2, VI(2));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                C[i][j] += (A[i][k]*B[k][j])%m;
            }
            C[i][j] %= m;
        }
    }
    return C;
}

matrix bin_exp(int n, matrix& M) {
    if (n == 0) return {{1, 0}, {0, 1}};
    matrix x = bin_exp(n/2, M);
    x = x*x;
    if (n&1) return x*M;
    return x;
}

int main() {
    int n;
    while (cin >> n >> m) {
        matrix M = {{1, 1}, {1, 0}};
        M = bin_exp(n+1, M);
        cout << M[1][1] << endl;
    }
}