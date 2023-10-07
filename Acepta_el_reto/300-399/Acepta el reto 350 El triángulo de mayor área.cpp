#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float n,m;
	cin>>n>>m;
	while(n!=0||m!=0){
		cout<<fixed<<setprecision(1)<<n*m/2<<'\n';
		cin>>n>>m;
	}
}
