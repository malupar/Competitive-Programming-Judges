#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int minim;
void bfs(int raiz, vector<vector<int>> & listaAdyacencia,vector<char> & mapa) {
 queue<int> colaBFS;
 vector<bool> visitado(listaAdyacencia.size(), false);
    vector<int> guardado(listaAdyacencia.size(), -1);
    guardado[raiz]=0;
 colaBFS.push(raiz);
 int nodoActual;
 while(!colaBFS.empty()) {
 nodoActual = colaBFS.front();
     colaBFS.pop();
 visitado[nodoActual] = true;
 for (int conexion: listaAdyacencia[nodoActual]) {
     if(guardado[conexion]==-1) guardado[conexion]=guardado[nodoActual]+1;
 if (!visitado[conexion]){
     colaBFS.push(conexion);
 }
     if(mapa[conexion]=='t') {
         minim=guardado[conexion];
            return;
 }
 }
 }
}
    int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int colum,x,y,fila,contador=0;
    while(cin>>colum>>fila){
    minim=0;
    vector<vector<int>> conexiones(colum*fila,vector <int>());
    vector <char> mapa(colum*fila);
    for(int j=0;j<colum;j++){
        for(int i=0;i<fila;i++){
            cin>>mapa[contador];
            if(mapa[contador]!='X'){
                if(j!=0){
                if(mapa[contador-fila]!='X'){
                    conexiones[contador].push_back(contador-fila);
                    conexiones[contador-fila].push_back(contador);
                }
            }
                if(i!=0){
                if(mapa[contador-1]!='X'){
                    conexiones[contador].push_back(contador-1);
                    conexiones[contador-1].push_back(contador);
                }
            }
            }
            contador++;
        }
    }
    cin>>x>>y;
    bfs(fila*(x-1)+y-1,conexiones,mapa);
        
        if(minim!=0) cout<<"minimum distance: "<<minim<<'\n';
        else cout<<"no treasure can be reached"<<'\n';
    }
    return 0;
}
