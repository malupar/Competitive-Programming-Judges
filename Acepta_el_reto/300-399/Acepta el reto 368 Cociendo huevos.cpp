#include <iostream>
using namespace std;
int n,capacidad,res;
int main(){
	cin>>n>>capacidad;
	while(n!=0&&capacidad!=0){
		if(n%capacidad==0) res=n/capacidad*10;
		else res=(n/capacidad+1)*10;
		cout<<res<<'\n';
		cin>>n>>capacidad;
	}
}
