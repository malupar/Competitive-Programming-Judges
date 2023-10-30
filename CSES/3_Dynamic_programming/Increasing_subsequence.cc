#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void LIS (int i,vector<int>& v,vector<int>& a){
	if(v[i] == -1){
		cout << i+1 << ' ';
		return;
	}
	LIS(v[i],v,a);
	cout << i+1 << ' ';
}
int main(){
	int n, maxi;
	cin >> n;
    vector<int> A(n);
    vector<int> p(n,-1);
    for(int i = 0; i < n; i++) cin >> A[i];
    int k = 0, lis_end = 0;
    vector<int> L(n,0);
    vector<int> L_id(n,0);
    for(int i = 0; i < n; i++){
        int pos = lower_bound(L.begin(),L.begin()+k,A[i])-L.begin();
        L[pos] = A[i];
        L_id[pos] = i;
        if(pos)p[i] = L_id[pos-1];
        else p[i] = -1;
        if(pos == k){
            k = pos+1;
            lis_end = i;
        }
    }
    cout << k << '\n';
}