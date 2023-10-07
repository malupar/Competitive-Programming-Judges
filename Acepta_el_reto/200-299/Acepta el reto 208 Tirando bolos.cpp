#include <iostream>
using namespace std;
int main(){
	int n,k,sum;
	while(cin>>n>>k){
		sum=0;
		if(n==0&&k==0) return 0;
		k--;
		while(k--){
			sum+=n;
			n--;
		}
		cout<<sum<<'\n';
	}
}
