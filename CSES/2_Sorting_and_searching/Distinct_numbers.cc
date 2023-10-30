#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
	long long int n, numero;
	cin >> n;
	set<long long> distintos;
	while(n--){
		cin >> numero;
		distintos.insert(numero);
	}
	int sol = (int)distintos.size();
	cout << sol << '\n';
}