#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	bool suma=true;
	cin>>str;
	int n=str.length();
	int i=1;
	while(i<n||suma){
	if(str[n-i]<'9')continue;
	suma=false;
	if(str[n-i]=='9'){
		i++;
		suma=true;
	}
}
	if(i>=n)i=1;
	for(int j=0;j<n-i-1;j++)cout<<str[i];
	cout<<str[n-i]-'0';
	for(int j=n-i;j<n-1;j++)cout<<'0';
}
