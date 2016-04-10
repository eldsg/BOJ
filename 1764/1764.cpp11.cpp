#include<map>
#include<string>
#include<iostream>
using namespace std;
map<string, int> hey;
int main(){
	int a, b, result = 0;
	cin >> a >> b;
	getchar();
	for(int i = 0; i<a; i++){
		string temp;
		getline(cin, temp);
		hey[temp]++;
	}
	for(int i = 0; i<b; i++){
		string temp;
		getline(cin, temp);
		hey[temp]++;
	}
	auto it = hey.begin();
	for(it; it!=hey.end(); it++){
		if(it->second == 2){
			result++;
		}
	}
	cout << result << endl;
	for(it=hey.begin(); it!=hey.end(); it++){
		if(it->second == 2){
			cout << it->first << endl;
		}
	}
}