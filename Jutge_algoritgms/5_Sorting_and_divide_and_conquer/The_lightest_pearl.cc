#include <iostream>
#include <vector>
using namespace std;
int main(){
	int t;
	vector<int> v(32);
	v[0]=1;
	for(int i=1;i<32;i++)v[i]=v[i-1]*3;
	while(cin>>t){
		for(int i=0;i<32;i++){
			if(v[i]>=t){
				cout<<i<<'\n';
				break;
			}
		}
	}
}
