#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
	int n, x, sol;
	cin >> n >> sol;
	vector<pair<int,int> >v(n);
	for(int i = 0; i < n; i++){
		cin >> x;
		v[i] = make_pair(x,i+1);
	}
	sort(v.begin(),v.end());
	for(int k = 0; k < n; k++){
		int i = 0, j = n-1;
		while(i < j){
		if(i == k){
			i++;
			continue;
		}
		if(j == k){
			j--;
			continue;
		}
		if(v[k].first > sol)break;
		int sum = v[i].first+v[j].first+v[k].first;
		if(sum == sol){
			cout << v[i].second << ' ' << v[j].second << ' ' << v[k].second;
			return 0;
		}
		else if(sum > sol)j--;
		else i++;
	}
	}
	cout << "IMPOSSIBLE" << endl;
}