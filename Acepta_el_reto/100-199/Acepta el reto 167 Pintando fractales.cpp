#include <vector>
#include <iostream>
using namespace std;
vector <long long int> longitudes(50000,-1);
long long int solucion(long long int operar){
	if(longitudes[operar]!=-1) return longitudes[operar];
	else return longitudes[operar]=solucion(operar/2)*4+operar*4;
}
int main(){
	long long int longitud;
	while(cin>>longitud){
		longitudes[0]=0;
		longitudes[1]=4;
		cout<<solucion(longitud)<<'\n';
	}
}
