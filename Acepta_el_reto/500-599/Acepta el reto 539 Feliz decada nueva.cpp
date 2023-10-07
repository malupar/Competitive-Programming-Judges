#include <iostream>
using namespace std;
int main(){
	long long int n,a;
	while(cin>>n>>a){
		if((a-n)%10==9)cout<<"FELIZ DECADA NUEVA\n";
		else cout<<"TOCA ESPERAR\n";
	}
}
