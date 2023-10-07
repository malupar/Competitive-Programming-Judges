#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int hora,minuto,total;
char punto;
int main(){
	cin>>hora>>punto>>minuto;
	while (hora!=0||minuto!=0){
	total=(23-hora)*60+(60-minuto);
	cout<<total<<endl;
	cin>>hora>>punto>>minuto;
}
return 0;
}