#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string str;
	while(cin>>str){
	vector<int> v(10,0);
	int n=str.length();
	for(int i=0;i<n;i++){
		int num=str[i]-'0';
		v[num]++;
	}
	bool nor=true;
	//cout<<v[0]<<' ';
	for(int i=1;i<10;i++){
		//cout<<v[i]<<' ';
		if(v[i]!=v[i-1])nor=false;
	}
	if(nor)cout<<"subnormal\n";
	else cout<<"no subnormal\n";
}
}
