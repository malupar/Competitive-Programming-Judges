#include <iostream>
#include <vector>
using namespace std;
vector<long long int> dias(1000);
vector<long long int> ahorro(1000);
long long int calcular(int n){
	long long int i=1;
	dias[0]=0;
	dias[1]=1;
	ahorro[0]=0;
	ahorro[1]=1;
	ahorro[2]=2,
	dias[2]=1;
	while(dias[i]!=0){
		if(ahorro[i]>=n)return i;
		i++;
	}
	while(ahorro[i]<n){
	dias[i]=2*dias[i-2]+dias[i-1];
	ahorro[i]=ahorro[i-1]+dias[i];
	if(ahorro[i]>=n)return i;
	i++;
}
	return i;
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<calcular(n)<<'\n';
	}
}
