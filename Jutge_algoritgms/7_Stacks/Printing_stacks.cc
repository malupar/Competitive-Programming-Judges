#include <iostream>
#include <stack>
using namespace std;


void print_from_top_to_bottom(stack<int>& pila){
    while(pila.size()){
        cout<<pila.top();
        pila.pop();
        if(pila.size())cout<<' ';
    }
    cout<<'\n';
}
void print_from_bottom_to_top(stack<int>& pila){
    stack<int> pila2;
    while(pila.size()){
        pila2.push(pila.top());
        pila.pop();
    }
    pila=pila2;
    while(pila.size()){
        cout<<pila.top();
        pila.pop();
        if(pila.size())cout<<' ';
    }
    cout<<'\n';
}


int main() {
  int n;
  while (cin >> n) {
    stack<int> pila;
    while (n--) {
      int x;
      cin >> x;
      pila.push(x);
    }

    stack<int> copia = pila;
    print_from_top_to_bottom(pila);
    print_from_bottom_to_top(copia);
  }
}
