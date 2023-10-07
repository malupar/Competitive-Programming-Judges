#include <iostream>
using namespace std;
int main(){
	float n,m,t;
	while(cin>>n>>m>>t){
		m/=3.6;
		if(n==0&&m==0&&t==0)return 0;
		if(m<=0||n<=0||t<=0)cout<<"ERROR\n";
		else if(n/t>=m*1.2)cout<<"PUNTOS\n";
		else if(n/t>m)cout<<"MULTA\n";
		else cout<<"OK\n";
	}
}
