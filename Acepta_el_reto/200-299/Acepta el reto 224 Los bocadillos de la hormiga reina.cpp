#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n,g;
	while(cin>>n){
		if(n==0)return 0;
		bool pos=false;
		vector<int> v(n);
		vector<int> suma(n+1);
		suma[0]=0;
		for(int i=0;i<n;i++){
		cin>>v[i];
		suma[i+1]=suma[i]+v[i];	
		}
		for(int i=0;i<n-1;i++){
			if(v[i]>=suma[n]-suma[i+1]){
				pos=true;
				g=i+1;
				break;
			}
		}
		if(pos)cout<<"SI "<<g<<'\n';
		else cout<<"NO\n";
	}
}
