#include<iostream>
#include<vector>
using namespace std;
vector<int> a;
vector<int>::iterator it;
int main(){
	int b, k = 0;
	cin >> b;
	for (int i = 1; i <= b; i++){
		a.push_back(i);
	}
	while (1){
		it = a.begin();
		cout << *it << " ";
		a.erase(a.begin());
		a.push_back(*it);
		a.erase(it);		
		if (a.empty()) break;
	}
}