#include <iostream>
#include <vector>
using namespace std;
const int mod=1e9+7;
int main(){
	int n;
	cin >> n;
	vector<int> DP(n+1,0);
	DP[0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= 6; j++){
			if(i-j >= 0){
				DP[i] += DP[i-j];
				DP[i] %= mod;
			}
		}
	}
	cout << DP[n] << endl;
}