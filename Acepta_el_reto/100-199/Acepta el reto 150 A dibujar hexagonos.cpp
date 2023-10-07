#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int n;
	char c;
	cin>>n>>c;
	while(n!=0||c!='0'){
		if(n==1)cout<<c<<'\n';
		else{
		int cuad=n+(n-1)*2;
		int lon=n*2-1;
		int pr=n;
		for(int i=0;i<=lon;i++){
			if(i<lon-i)pr--;
			else if(i>lon-i)pr++;
			if(i==n){
				i++;
			}
			for(int j=0;j<pr;j++)cout<<' ';
			for(int j=0;j<n+min(i,lon-i)*2;j++)cout<<c;
			cout<<'\n';
		}
	}
		cin>>n>>c;
	}
}