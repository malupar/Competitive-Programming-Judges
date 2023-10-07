#include <iostream>
using namespace std;
int main(){
	int f,c,d;
	cin>>f>>c>>d;
	while(f!=0&&c!=0&&d!=0){
		if(c+d<=f)cout<<c+d<<'\n';
		else{
			cout<<f-(c+d-f)<<'\n';
		}
		cin>>f>>c>>d;
	}
}
