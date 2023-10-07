#include <iostream>
using namespace std;
int main(){
	int n,dia,mes;
	cin>>n;
	while(n--){
		cin>>dia>>mes;
		if(dia==25&&mes==12) cout<<"SI"<<'\n';
		else cout<<"NO"<<'\n';
	}
}
