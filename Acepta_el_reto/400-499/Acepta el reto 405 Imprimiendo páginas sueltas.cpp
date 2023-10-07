#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n,neo;
	bool ran;
	while(cin>>n){
		ran=false;
		if(n==0)break;
		while(cin>>neo){
			if(neo==0){
			if(ran)cout<<'-';
			cout<<n<<'\n';
			break;	
			}
			if(n+1==neo&&!ran){
			cout<<n;
			n=neo;
			ran=true;
			continue;	
			}
			else if(n+1==neo&&ran){
				n=neo;
				continue;
			}
			else{
				if(ran){
					ran=false;
					cout<<'-'<<n<<',';
				}
				else{
					cout<<n<<',';
				}
			}
			n=neo;
		}
	}
}
