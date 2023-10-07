#include <iostream>
using namespace std;
int main(){
	int n;
	char c;
	cin>>n;
	while(n!=0){
		cin>>c;
		int lon=8*n;
		for(int i=0;i<lon+2;i++){
			cout<<'|';
			if(i==0||i==lon+1){
				for(int j=0;j<lon;j++)cout<<'-';
			}
			else{
			for(int j=0;j<8;j++){
				if(j%2==0){
					if((i-1)%(n*2)<n)for(int q=0;q<n;q++)cout<<' ';
					else for(int q=0;q<n;q++)cout<<c;
				}
				else{
					if((i-1)%(n*2)<n)for(int q=0;q<n;q++)cout<<c;
					else for(int q=0;q<n;q++)cout<<' ';
				}
			}
		}
			cout<<"|\n";
		}
		cin>>n;
	}
}
