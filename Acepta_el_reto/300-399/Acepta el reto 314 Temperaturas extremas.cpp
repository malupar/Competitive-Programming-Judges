#include <iostream>
#include <vector>
using namespace std;
int main(){
	int caso,n;
	cin>>caso;
	while(caso--){
		cin>>n;
		vector <int> temp(n);
		int pico=0;
		int valle=0;
		int contador=0;
		while(n--){
			cin>>temp[contador];
			contador++;
		}
		for(int i=1;i<contador-1;i++){
			if(temp[i]<temp[i+1]&&temp[i-1]>temp[i]) pico++;
			if(temp[i]>temp[i+1]&&temp[i-1]<temp[i]) valle++;
		}
		cout<<valle<<" "<<pico<<'\n';
	}
}
