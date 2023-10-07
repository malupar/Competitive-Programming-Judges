#include <iostream>
#include <vector>
using namespace std;
vector <int> orden(20000,-1);
int suma(int n){
	if(orden[n]==-1){
		return orden[n]=suma(n-1)+n;
	}
	else return orden[n];
}
int main(){
	int n;
	cin>>n;
	while(n!=0){
		orden[0]=0;
		cout<<suma(n)*3<<'\n';
		cin>>n;
	}
}
