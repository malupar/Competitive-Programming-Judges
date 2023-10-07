#include <iostream>
#include <vector>
using namespace std;
int main(){
	int t,n,num,neo,contador;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> cola(n);
		num=0;
		contador=0;
		for(int i=0;i<n;i++){
			cin>>cola[i];
		}
		int referencia=cola[n-1];
		for(int i=n-1;i>0;i--){
			if(referencia<cola[i-1]) contador++;
			else referencia=cola[i-1];
		}
		cout<<contador<<'\n';
	}
}
