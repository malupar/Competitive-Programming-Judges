#include <iostream>
#include <stack>
using namespace std;
int main(){
	int n, x;
	stack<pair<int,int> >s;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x;
		while(!s.empty() && s.top().first >= x){
			s.pop();
		}
		if(s.empty())cout << 0 << ' ';
		else cout << s.top().second+1 << ' ';
		s.push(make_pair(x,i));
	}
}