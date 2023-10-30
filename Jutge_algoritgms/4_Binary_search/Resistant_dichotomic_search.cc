#include <iostream>
#include <vector>
using namespace std;


bool resistant_search(double x, const vector<double>& v){
    int left = 0, right = v.size()-1;
    int ans = -1;
    while (left <= right){
        int mid = (left + right) /2;
        if(mid < v.size()-1 && v[mid] > v[mid+1]){
            if(v[mid] == x || v[mid+1] == x)return true;
            if(v[mid] < x) left = mid+2;
            else right = mid-1;
        }else if(mid && v[mid-1] > v[mid]){
            if(v[mid] == x || v[mid-1] == x)return true;
            if(v[mid] > x) right = mid-2;
            else left = mid+1;
        }
        else{
            if(v[mid] == x)return true;
            if(v[mid] < x) left = mid+1;
            else right = mid-1;
        }
    }
    return false;
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
            cout << resistant_search(x, V) << endl;
        }
    }
}
