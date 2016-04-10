#include<string>
#include<iostream>
#include<vector>
using namespace std;
vector<int> position;
int main(){
	string a;
	int i = 1;
	while (getline(cin, a)){
		auto pos = a.find("FBI");
		if (string::npos != pos){
			position.push_back(i);
		}
		i++;
	}
	if (position.empty()){
		printf("HE GOT AWAY!\n");
	}
	else{
		for (int i = 0; i < position.size(); i++){
			printf("%d ", position[i]);
		}
		printf("\n");
	}
}