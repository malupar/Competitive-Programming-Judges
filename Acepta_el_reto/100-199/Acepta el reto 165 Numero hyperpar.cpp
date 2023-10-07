#include <iostream>
using namespace std;
int main(){
	int n,m;
	while(cin>>n){
		if(n<0)return 0;
		bool pos=true;
		while(n){
			int m=n%10;
			n-=m;
			n/=10;
			if(m%2!=0){
				pos=false;
				break;
			}
		}
		if(pos)cout<<"SI\n";
		else cout<<"NO\n";
	}
}
