#include <iostream>
using namespace std;
int main(){
	long long a[68] = {1, 1, 2, 4};
	int t,d,i;
	for(i = 4; i<=67; i++)a[i] = a[i-1]+a[i-2]+a[i-3]+a[i-4];
	for(cin>>t; t; t--){
		cin>> d; cout<< a[d]<<endl;
	}
}