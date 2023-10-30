#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, cont = 0, maxi = 0;
	cin >> n;
	while(n != 0){
		int x = n;
		while(x) {
			maxi = max(maxi, x%10);
			x /= 10;
		}
		n -= maxi;
		maxi = 0;
		cont++;
	}
	cout << cont << '\n';
}