#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long int
signed main(){
	vector<string> s;
	string str;
	cin>>str;
	int n=str.length();
	vector<char> v;
	for(int i=0;i<n;i++)v.push_back(str[i]);
	str="";
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)str+=v[i];
	s.push_back(str);
	while(next_permutation(v.begin(),v.end())){
		str="";
		for(int i=0;i<n;i++)str+=v[i];
		s.push_back(str);
	}
	cout<<s.size()<<'\n';
	for(auto x:s)cout<<x<<'\n';
}