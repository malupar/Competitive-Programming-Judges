#include <iostream>
#include <vector>
using namespace std;


int first_occurrence(double x, const vector<double>& v){
    int left = 0, right = v.size()-1;
    int ans = -1;
    while(left <= right){
        int mid = (left + right)/2;
        if(v[mid] < x)left = mid+1;
        else{
            if(v[mid] == x) ans = mid;
            right = mid-1;
        }
    }
    return ans;
}


int main() {
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) cin >> V[i];
        int t;
        cin >> t;
        while (t--) {
            double x;
            cin >> x;
            cout << first_occurrence(x, V) << endl;
        }
    }
}
