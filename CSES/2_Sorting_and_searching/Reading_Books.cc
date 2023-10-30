#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    long long sum=0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    for(int i = 0; i < n; i++){
        if(v[i] > sum-v[i]){
            cout << 2*v[i] << '\n';
            return 0;
        }
    }
    cout << sum << '\n';
}