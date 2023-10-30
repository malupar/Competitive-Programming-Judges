#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<4&&n!=1)cout<<"NO SOLUTION\n";
	else{
		for(int i=1;i<=n/2;i++)cout<<i*2<<' ';
		if(n%2==0)for(int i=0;i<n/2;i++)cout<<2*i+1<<' ';
		else for(int i=0;i<n/2+1;i++)cout<<2*i+1<<' ';
	}
}