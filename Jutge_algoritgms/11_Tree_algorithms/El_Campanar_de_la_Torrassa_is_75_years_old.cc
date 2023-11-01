#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;
typedef long double ld;
const ld PI=3.14159265359;
ld dist(int a,int b,int angle){
    ld dif=angle;
    dif=dif/180*PI;
    ld h=sin(dif)*b;
    ld x=cos(dif)*b;
    x=a-x;
    return sqrt(h*h+x*x);
}
ld triangle(int angle1,int angle2,int angle3){
    ld a=dist(5,4,angle1-angle2);
    ld b=dist(5,3,angle1-angle3);
    ld c=dist(4,3,angle2-angle3);
    ld s=(a+b+c)/2;

    ld area=s*(s-a)*(s-b)*(s-c);
    if(area<0)return 0;
    return sqrt(area);
}
void build(int n,int l,int r,vector<ld>& tree,vector<ld>& time){
    if(l==r)tree[n]=time[l];
    else{
        int mid=(r+l)/2;
        build(n<<1,l,mid,tree,time);
        build((n<<1)+1,mid+1,r,tree,time);
        tree[n]=max(tree[n<<1],tree[(n<<1)+1]);
    }
}
ld val(int n,int l,int r,vector<ld>& tree,int a,int b){
    if(l>b||r<a)return 0;
    if(l>=a&&r<=b)return tree[n];
    int mid=(r+l)/2;
    ld valls=val(n<<1,l,mid,tree,a,b);
    ld valrs=val((n<<1)+1,mid+1,r,tree,a,b);
    return max(valls,valrs);
}
int main(){
    vector<ld> time(12*60*60),tree(12*60*60*4);
    for(int h=0;h<12;h++){
        for(int m=0;m<60;m++){
            for(int s=0;s<60;s++){
                time[h*60*60+m*60+s]=triangle(s*6,m*6,h*30);
            }
        }
    }
    build(1,0,12*60*60-1,tree,time);
    char c;
    int h1,h2,m1,m2,s1,s2;
    while(cin>>h1>>c>>m1>>c>>s1>>h2>>c>>m2>>c>>s2){
        cout<<fixed<<setprecision(3)<<val(1,0,12*3600-1,tree,h1*3600+m1*60+s1,h2*3600+m2*60+s2)<<'\n';
    }
}