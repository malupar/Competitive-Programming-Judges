#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int resultado=0,n;
int triangulo(long long int y){
long long int x=0;
resultado=0;
while(y>x){
x=x+resultado+1;
resultado++;
}
if(y-x!=0){
	resultado--;
}
return resultado;
}

long long int sobra(long long int y){
int x=0;
resultado=0;
while(y>x){
x=x+resultado+1;
resultado++;
}
if(y-x!=0){
	x=x-resultado;
}
return y-x;
}	

int main(){
	cin>>n;
	while (n!=0){
	cout<<triangulo(n)<<" "<<sobra(n)<<'\n';
	cin>>n;
}
}
