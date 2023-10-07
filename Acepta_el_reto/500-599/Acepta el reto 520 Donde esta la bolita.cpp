#include <iostream>
using namespace std;
int main(){
	int n,p,a,b;
	while(cin>>n>>p){
		if(n==0&&p==0)break;
		while(cin>>a>>b){
			if(a==0&&b==0)break;
			if(a==p)p=b;
			else if(b==p)p=a;
		}
		cout<<p<<'\n';
	}
}
