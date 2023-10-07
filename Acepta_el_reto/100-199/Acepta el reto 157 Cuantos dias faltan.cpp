#include <iostream>
using namespace std;
int n,mes,dia,total;

int main(){
	cin>>n;
	while(n--){
	total=0;
	cin>>dia;
	cin>>mes;
	if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
	dia=31-dia;	
	}
	else if(mes==2){
	dia=28-dia;
	}
	else{
	dia=30-dia;	
	}
	for(int b=12;b>mes;b--){
	if (b==12||b==10||b==8||b==7||b==5||b==3){
		total=total+31;
	}
	else if (b==2){
		total=total+28;
	}
	else if(b==11||b==9||b==6||b==4){
		total=total+30;
	}
}
total=dia+total;
cout<<total<<'\n';
}
return 0;
}
