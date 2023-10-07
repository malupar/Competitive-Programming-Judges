#include <iostream>
using namespace std;
int n,pat6,pat8,pat10,xpat,anillos;
int main(){
	cin>>n;
	while(n--){
		cin>>pat6>>pat8>>pat10>>xpat>>anillos;
		cout<<pat6*6+pat8*8+pat10*10+xpat*2*anillos<<endl;
	}
}
