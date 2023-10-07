#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main(){
	int t,n;
	while(cin>>t){
		string str,neo;
		map <string,string> m;
		vector<string> v(t);
		for(int i=0;i<t;i++){
			cin>>str;
			neo=str;
			int n=str.length();
			for(int j=0;j<n;j++)if(str[j]<'a')neo[j]=neo[j]-'A'+'a';
			v[i]=neo;
			if(m.find(neo)==m.end())m.insert(make_pair(neo,str));
			else if(m[neo]>str)m[neo]=str;
		}
		for(int i=0;i<t;i++)cout<<m[v[i]]<<'\n';
		cout<<"---\n";
	}
}
