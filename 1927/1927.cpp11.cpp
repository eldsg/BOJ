#include<iostream>
#include<set>
#include<stdio.h>
using namespace std;
int num;
set<int> hey;
int main(){
	scanf("%d", &num);
	while(num--){
		int temp;
		scanf("%d", &temp);
		if(temp == 0){
			if(hey.empty()) printf("0\n");
			else{
				auto it = hey.begin();
				cout << *it << endl;
				hey.erase(it);
			}
		}
		else{
			hey.insert(temp);
		}
	}
}