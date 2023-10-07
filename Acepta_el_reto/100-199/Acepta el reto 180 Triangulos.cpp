#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		vector<int> v(3);
		cin>>v[0]>>v[1]>>v[2];
		sort(v.begin(),v.end());
		if(v[0]+v[1]<=v[2])cout<<"IMPOSIBLE\n";
		else{
			if(v[0]*v[0]+v[1]*v[1]==v[2]*v[2])cout<<"RECTANGULO\n";
			else if(v[0]*v[0]+v[1]*v[1]>v[2]*v[2])cout<<"ACUTANGULO\n";
			else cout<<"OBTUSANGULO\n";
		}
	}
}
