#include<vector>
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
vector<int> a;
int main(){
	int num;
	cin >> num;
	for(int i = 0; i<num; i++){
		int x;
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	auto last = unique(a.begin(), a.end());
	auto it = a.begin();
	for(it; it!=last; it++){
		cout << *it << " ";
	}
}