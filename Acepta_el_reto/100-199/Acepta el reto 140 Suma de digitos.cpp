#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int numero;
int main(){
	cin>>numero;
	while(numero>=0){
		int contador=0;
		int total=0;
		vector <int> sumas;
		while(numero/10!=0){
			sumas.push_back(numero%10);
			contador++;
			numero=numero/10;
		}
		sumas.push_back(numero%10);
		for(int a=contador;a>0;a--){
		cout<<sumas[a]<<" + ";
		total+=sumas[a];
	}
	cout<<sumas[0]<<" = ";
	total+=sumas[0];
	cout<<total<<endl;
	
	cin>>numero;
	}
	return 0;
}