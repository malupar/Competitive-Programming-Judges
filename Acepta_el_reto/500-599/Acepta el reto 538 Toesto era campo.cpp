#include <iostream>
using namespace std;
int abu,edad;
int main(){
	cin>>abu>>edad;
	while (abu!=0||edad!=0){
	if (abu>=edad){
		cout<<"CUERDO"<<endl;
	}
	else{
		cout<<"SENIL"<<endl;
	}
	cin>>abu>>edad;
}	
}
