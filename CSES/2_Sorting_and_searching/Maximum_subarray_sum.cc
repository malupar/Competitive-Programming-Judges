#include <iostream>
#include <vector>
using namespace std;
int main(){
	long long int n, x, sum=0, ans=-1e9;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x;
		sum += x;
		ans = max(sum,ans);
		if(sum < 0) sum = 0;
	}
	cout << ans << '\n';
}