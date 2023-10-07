#include <iostream>
#include <set>
using namespace std;
int main(){
	int t;
	string str,n;
	while(cin>>t){
		set<string> ok;
		set<string> no;
		if(t==0)return 0;
		for(int i=0;i<t;i++){
			cin>>str;
			if(str=="SI:"){
				while(cin>>n){
					if(n=="FIN")break;
					ok.insert(n);
				}
			}
			else{
				while(cin>>n){
					if(n=="FIN")break;
					no.insert(n);
				}
			}
		}
		for(auto it=ok.begin();it!=ok.end();it++){
			no.erase(*it);
		}
		bool fir=true;
		for(auto it=no.begin();it!=no.end();it++){
			if(fir){
				fir=false;
				cout<<*it;
			}
		else cout<<' '<<*it;	
		}
		cout<<'\n';
	}
}
