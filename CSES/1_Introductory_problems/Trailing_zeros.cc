#include <iostream>
using namespace std;
int main(){
	int n,div=5,sum=0;
	cin>>n;
	while(div<=n){
		sum+=n/div;
		div*=5;
	}
	cout<<sum;
}