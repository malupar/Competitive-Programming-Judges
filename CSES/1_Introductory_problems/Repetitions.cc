#include <iostream>
#include <vector>
using namespace std;
int main(){
	char car;
	char observando;
	int maxi=0;
	vector <char> cadena;
	int contador=0;
	cin>>observando;
	while(cin>>car){
		cadena.push_back(car);
		if(observando==car)contador++;
		else{
			if(contador>maxi)
			maxi=contador;
			contador=0;
			observando=car;
		}
	}
	if(contador>maxi)cout<<contador+1;
	else cout<<maxi+1;
}