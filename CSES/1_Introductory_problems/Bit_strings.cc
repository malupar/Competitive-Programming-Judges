#include <iostream>
using namespace std;
int main(){
	int mod=1e9+7;
	long long int num,total=1;
	cin>>num;
	while(num--){
		total*=2;
		total%=mod;
	}
	cout<<total;
}