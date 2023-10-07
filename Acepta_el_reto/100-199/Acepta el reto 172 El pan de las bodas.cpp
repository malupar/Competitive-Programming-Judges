#include <iostream>
using namespace std;
int main(){
	int n;
	string str;
	bool izq,der;
	cin>>n;
	while(n!=0){
		izq=false; der=false;
		cin>>str;
		for(int i=0;i<n;i++){
			if(str[i]=='I')izq=true;
			if(str[i]=='D')der=true;
		}
		if(izq&&der)cout<<"ALGUNO NO COME\n";
		else cout<<"TODOS COMEN\n";
		cin>>n;
	}
}
