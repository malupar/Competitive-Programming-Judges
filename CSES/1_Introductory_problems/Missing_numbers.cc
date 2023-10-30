#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n,num;
	cin>>n;
	vector <bool> numeros(n,false);
	for(int i=0;i<n-1;i++){
		cin>>num;
		numeros[num-1]=true;
	}
	for(int i=0;i<n;i++){
		
		if(!numeros[i]){
			cout<<i+1;
			return 0;
		} 
	}
}