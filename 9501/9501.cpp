#include <iostream>
using namespace std;
int main(){
	int t,num;
	double d;
	cin >> t;
	while(t--){
		int count = 0;
		cin >> num >> d;
		while(num--){
			double a, b, c,f, result;
			cin >> a >> b >> c;
			f = b/c;
			result = a*f;
			if(result >= d){
				count++;
			}
		}
		cout << count << endl;
	}
}