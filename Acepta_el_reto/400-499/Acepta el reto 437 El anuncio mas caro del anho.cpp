#include <iostream>
using namespace std;
int main(){
	int casos,horas,minutos,segundos,tiempo;
	char barra;
	cin>>casos;
	while(casos--){
		cin>>horas>>barra>>minutos>>barra>>segundos;
		tiempo=horas*3600+minutos*60+segundos;
		tiempo=86400-tiempo;
		horas=tiempo/3600;
		tiempo=tiempo-horas*3600;
		minutos=tiempo/60;
		segundos=tiempo%60;
		if(horas<10)cout<<0<<horas<<barra;
		else if(horas==24)cout<<"00:";
		else cout<<horas<<barra;
		if(minutos<10)cout<<0<<minutos<<barra;
		else cout<<minutos<<barra;
		if(segundos<10)cout<<0<<segundos<<'\n';
		else cout<<segundos<<'\n';
	}
	return 0;
}
