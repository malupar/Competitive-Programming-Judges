#include <iostream>
#include <string>
using namespace std;
	string str;
	char letra;
	int t,n;
	bool A,E,I,O,U;
int main(){
	cin>>t;
	while(t--){
	A=false; E=false; I=false; O=false;	U=false;
	cin>>str;
	int n=str.length();
	for(int b=0;b<n;b++){
    letra=str[b];
    if (letra=='a') A=true;
	if (letra=='e') E=true;
	if (letra=='i') I=true;
	if (letra=='o') O=true;
	if (letra=='u') U=true;
}
if (A==true&&E==true&&I==true&&O==true&&U==true)cout<<"SI"<<'\n';
else cout<<"NO"<<'\n';
}
}
