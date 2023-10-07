#include <iostream>
using namespace std;
int copas,viajes,turno;
int calculo(int vasos){
viajes=0;
turno=1;
while(vasos!=0){
	if (turno==1){
		viajes++;
		turno=2;
		vasos--;
	}
	else{
		if (vasos%2==0){
			viajes++;
			turno=1;
			vasos-=2;
		}
		else {
			viajes++;
			turno=1;
			vasos--;
		}
	}
}
return viajes;
}

int main(){
  cin>>copas;
  while(copas!=0){
    cout<<calculo(copas)<<endl;
    cin>>copas;
}
}
