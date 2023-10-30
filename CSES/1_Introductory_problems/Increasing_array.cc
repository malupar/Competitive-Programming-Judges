#include <iostream>
#include <vector>
using namespace std;
int main(){
	long long int n,contador;
	contador=0;
	cin>>n;
	vector <int> nums(n);
	cin>>nums[0];
	for(int i=1;i<n;i++){
		cin>>nums[i];
		if(nums[i]<nums[i-1]){
			contador+=(nums[i-1]-nums[i]);
			nums[i]=nums[i-1];
		}
	}
	cout<<contador;
}