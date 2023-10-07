#include <iostream>
using namespace std;
char barra;
int main(){
	long long int max,min,n;
	cin>>n;
	while(n--){
		cin>>max>>barra>>min;
		if (max<min) cout<<"MAL"<<'\n';
		else cout<<"BIEN"<<'\n';
	}
	return 0;
}
