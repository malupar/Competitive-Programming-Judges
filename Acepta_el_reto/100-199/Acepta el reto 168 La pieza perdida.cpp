#include <iostream>
using namespace std;
int n,total,lista,contador;
int main(){
	cin>>n;
	while(n!=0){
	total=0;
	contador=n;
	while(n!=0){
		total=n+total;
		n--;
	}
	for(int a=1;a<=contador-1;a++){
	cin>>lista;
	total=total-lista;
}
	cout<<total<<'\n';
	cin>>n;
}
	return 0;
}
