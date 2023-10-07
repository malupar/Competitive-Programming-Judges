#include <iostream>
using namespace std;
int main(){
	int t,n,ol,neo;
	cin>>t;
	while(t--){
		bool fir=true;
		int a=0,b=0;
		cin>>n;
		while(n--){
			cin>>neo;
			if(fir){
				ol=neo;
				fir=false;
			}
			if(ol>neo)b++;
			else if(ol<neo)a++;
			ol=neo;
		}
		cout<<a<<' '<<b<<'\n';
	}
}
