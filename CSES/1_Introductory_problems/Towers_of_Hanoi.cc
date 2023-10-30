#include <iostream>
#include <vector>
 
using namespace std;
 
vector<pair<int,int>> ans;
 
void hanoi (int n, int p, int aux, int ob) {
    if (!n) return;
    hanoi (n-1, p, ob, aux);
    ans.push_back ({p, ob});
    hanoi (n-1, aux, p, ob);
}
 
int main() {
    int n;
    int p = 1;
    int aux = 2;
    int ob = 3;
    cin >> n;
    hanoi (n, p, aux, ob);
    cout << ans.size() << '\n';
    for (auto x: ans) {
        cout << x.first << ' ' << x.second << '\n';
    }
}