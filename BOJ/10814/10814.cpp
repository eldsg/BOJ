#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<vector<string> > ret;

int main(){
	int t;
	scanf("%d", &t);
	vector<vector<string> >ret(201);
	for(int i = 0; i < t; i++){
		int num;
		string name;
		scanf("%d", &num);
		cin >> name;
		ret[num].push_back(name);
	}
	for(int i = 1; i <= 200; i++){
		if(ret[i].size() > 0){
			for(int j = 0; j <ret[i].size(); j++){
				printf("%d ", i);
				cout << ret[i][j] << endl;
			}
		}
	}
}
