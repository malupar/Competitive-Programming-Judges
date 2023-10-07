#include <iostream>
using namespace std;
int n,piso,escaleras,avancepiso,avanceescalera,subida,bajada;
int main(){
cin>>n;
while(n--){
	cin>>piso>>escaleras>>avancepiso>>avanceescalera;
	bajada=avancepiso*escaleras+avanceescalera;
	subida=bajada+piso*escaleras;
	cout<<bajada<<" "<<subida<<endl;
}
return 0;
}
