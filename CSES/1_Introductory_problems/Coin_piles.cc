#include <iostream>
using namespace std;
int main(){
    int t, a, b;
    cin >> t;
    while(t--){
    cin >> a >> b;
    if(b > a) swap(a,b);
    if(a-b > b)cout << "NO\n";
    else if(a%3 == 1 && b%3 == 2||(a%3 == 2 && b%3 == 1)||(!(a%3) && !(b%3)))
        cout << "YES\n";
    else cout << "NO\n";
    }
}