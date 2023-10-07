#include <iostream>
using namespace std;
long long int n,gastos;
int main(){
	cin>>n;
	while(n!=0){
		long long int suma=0;
		while(n--){
		cin>>gastos;
		suma+=gastos;
	}
	cout<<suma<<'\n';
	cin>>n;
	}
}
