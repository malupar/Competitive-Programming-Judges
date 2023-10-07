#include <iostream>
using namespace std;
int main(){
	int n;
	string str;
	cin>>n>>str;
	while(n!=9999||str!="ZZZ"){
		if(n+1<=9999&&n+1>=1000)cout<<n+1<<' '<<str;
		else if(n+1<1000&&n+1>=100)cout<<0<<n+1<<' '<<str;
		else if(n+1<100&&n+1>=10)cout<<0<<0<<n+1<<' '<<str;
		else if(n+1<10)cout<<0<<0<<0<<n+1<<' '<<str;
		else{
			if(str[2]=='Z'){
				if(str[1]=='Z'){
					if(str[0]!='D'&&str[0]!='H'&&str[0]!='N'&&str[0]!='T'){
					str[0]++;
					str[1]='B';
					str[2]='B';	
					}
				    else {
				    str[0]+=2;
					str[1]='B';
					str[2]='B';	
					}
				}
				else {
					if(str[1]!='D'&&str[1]!='H'&&str[1]!='N'&&str[1]!='T'){
					str[1]++;
					str[2]='B';	
					}
				    else {
				    	str[1]+=2;
				    	str[2]='B';
					}
				}
			}
			else{
				if(str[2]!='D'&&str[2]!='H'&&str[2]!='N'&&str[2]!='T')str[2]++;
				else str[2]+=2;
			} 
			cout<<0<<0<<0<<0<<' '<<str[0]<<str[1]<<str[2];
		}
		cout<<'\n';
		cin>>n>>str;
	}
}